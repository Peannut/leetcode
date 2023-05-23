/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101. Symmetric Tree.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:34:33 by zoukaddo          #+#    #+#             */
/*   Updated: 2023/05/23 16:24:04 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        // If the root is null, it is symmetric
        if (root == nullptr) {
            return true;
        }
        
        // Check if the left subtree is symmetric to the right subtree
        return isSymmetricHelper(root->left, root->right);
    }
    
private:
    bool isSymmetricHelper(TreeNode* leftSubtree, TreeNode* rightSubtree) {
        // If both subtrees are null, they are symmetric
        if (leftSubtree == nullptr && rightSubtree == nullptr) {
            return true;
        }
        
        // If only one subtree is null or their values don't match, they are not symmetric
        if (leftSubtree == nullptr || rightSubtree == nullptr || leftSubtree->val != rightSubtree->val) {
            return false;
        }
        
        // Recursively check if the left subtree of the left subtree is symmetric to the right subtree of the right subtree,
        // and if the right subtree of the left subtree is symmetric to the left subtree of the right subtree.
        return isSymmetricHelper(leftSubtree->left, rightSubtree->right) && isSymmetricHelper(leftSubtree->right, rightSubtree->left);
    }
};