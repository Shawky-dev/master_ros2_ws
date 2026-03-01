#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "master_ros2_interface/msg/custom_msg.hpp"

class PublisherNode : public rclcpp::Node
{
public:
    PublisherNode() : Node("publisher_node")
    {
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10)).reliable().transient_local();
        publisher_ = this->create_publisher<std_msgs::msg::String>("std_string_topic", qos_profile);
        custom_publisher_ = this->create_publisher<master_ros2_interface::msg::CustomMsg>("custom_topic", qos_profile);

        // create_wall_timer(period, callback, group, autostart)
        // - period: interval between callback executions
        // - callback: must be a callable with signature void()
        // Here we bind the member function to this instance because
        // publish_messages is a non-static member function and requires
        // an object to be invoked on. std::bind produces the required:
        // publish_messages -> void (PublisherNode::*)()
        // void() callable by attaching it to this.
        // (A lambda could achieve the same; we use bind to stay consistent with the book.)
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&PublisherNode::publish_messages, this));
    }

private:
    // Method to publish both standard and custom messages
    void publish_messages()
    {
        // Publish std_msgs::msg::String
        auto string_msg = std_msgs::msg::String();
        string_msg.data = "Hello, world!";
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", string_msg.data.c_str());
        publisher_->publish(string_msg);

        // Publish custom message master_ros2_interface::msg::CustomMsg
        auto custom_msg = master_ros2_interface::msg::CustomMsg();
        custom_msg.data = "Custom Hello";
        custom_msg.number = 42;
        RCLCPP_INFO(this->get_logger(), "Publishing custom message: data='%s', number=%d", custom_msg.data.c_str(), custom_msg.number);
        custom_publisher_->publish(custom_msg);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::Publisher<master_ros2_interface::msg::CustomMsg>::SharedPtr custom_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int
main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PublisherNode>());
    rclcpp::shutdown();
    return 0;
}
