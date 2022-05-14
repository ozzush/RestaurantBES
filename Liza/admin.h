#pragma once

#include <cstdlib>
#include "string"

namespace restbes {

class Admin {
public:
    Admin() = default;

    static void change_order_status(const std::string &order_id,
                                    int set_status) noexcept;

    static void change_dish_status(const std::string &dish_name,
                                   int set_status);

    static void change_dish_price(const std::string &dish_id, const std::string &set_price);

    static void change_dish_info(const std::string &dish_id,
                                 const std::string &set_info);

    static std::string getPrice(const std::string &dish_id);

    static std::string getDishStatus(const std::string &dish_id);

    static std::string getOrderStatus(const std::string &order_id);

    static std::string getDishName(const std::string &dish_id);
};
}  // namespace restbes
