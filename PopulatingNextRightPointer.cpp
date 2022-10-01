class Solution {
public:
    Node* connect(Node* root)
    {
        if (!root) return root;
        Node* head=root;
        while(head)
        {
            Node* newNode=new Node(0);
            Node* temp=newNode;
            while(head)
            {
                if (head->left)
                {
                    temp->next=head->left;
                    temp=temp->next;
                }
                if (head->right)
                {
                    temp->next=head->right;
                    temp=temp->next;
                }
                head=head->next;
            }
            head=newNode->next;
        }
        return root;
    }
};
