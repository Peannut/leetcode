/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9. Palindrome Number.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:26:07 by zoukaddo          #+#    #+#             */
/*   Updated: 2023/05/23 16:38:15 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// bool isPalindrome(int x) {
//     if (x < 0) {
//         return false;  // Negative numbers cannot be palindromes
//     }

//     int reversed = 0;
//     int original = x;

//     while (x != 0) {
//         int digit = x % 10;
//         reversed = reversed * 10 + digit;
//         x /= 10;
//     }

//     return reversed == original;
// }

// int main() {
//     int num;

//     std::cout << "Enter an integer: ";
//     std::cin >> num;

//     if (isPalindrome(num)) {
//         std::cout << num << " is a palindrome." << std::endl;
//     } else {
//         std::cout << num << " is not a palindrome." << std::endl;
//     }

//     return 0;
// }


//
class Solution {
public:
    bool isPalindrome(int x) {
             // Convert the integer to a string
        std::string str = std::to_string(x);

        // Check if the string is a palindrome
        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }

        return true;
   
    }
};
