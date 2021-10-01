#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root){
    Node *temp = root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



class Solution
{
    public:
    Node * removeDuplicates( Node *head){
        map<int, int> mp;
        Node* cur = head;
        mp[cur->data] = 1;
        Node* prev = cur;
        cur = cur->next;
        while(cur!=NULL){
            if(mp[cur->data]){
                prev->next = cur->next;
                free(cur);
            }else{
                mp[cur->data] = 1;
                prev = cur;
            }
            cur = prev->next;
        }
        return head;
    }
};

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}