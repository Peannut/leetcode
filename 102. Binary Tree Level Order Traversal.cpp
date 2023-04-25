/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   102. Binary Tree Level Order Traversal.cpp         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:24:58 by zoukaddo          #+#    #+#             */
/*   Updated: 2023/04/25 17:25:10 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        if (root == nullptr) {
            return result;
        }
        
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            
            result.push_back(level);
        }
        
        return result;
    }
};