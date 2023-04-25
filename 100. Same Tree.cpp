/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100. Same Tree.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:45 by zoukaddo          #+#    #+#             */
/*   Updated: 2023/04/25 16:23:52 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both trees are empty, return true
        if (p == nullptr && q == nullptr) {
            return true;
        }
        
        // If one of the trees is empty, or their values don't match, return false
        if (p == nullptr || q == nullptr || p->val != q->val) {
            return false;
        }
        
        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    
};