#include <bits/stdc++.h>

using namespace std;

class Node 
{
public:
int val;
Node* next;
            Node(int val)
            {
                this->val=val;
                this->next=NULL;

            }
};
void insert_at_tail(Node* &head, int v)
{
Node* Ne=new Node(v);
if(head==NULL){

    head=Ne;
    return;
}

Node*tmp=head;
while (tmp->next!=NULL)
{
    tmp=tmp->next;
}
tmp->next=Ne;
}

void insert_at_position(Node* head,int pos,int v)
{

Node* ne=new Node(v);

Node* tmp=head;
for (int i = 1; i <= pos-1; i++)
{
    tmp=tmp->next;
}
ne->next=tmp->next;
tmp->next=ne;


}
void insert_at_head(Node* &head,int v)
{

Node* ne=new Node(v);
ne->next=head;
head=ne;



}
void print_link_list(Node*head)
{
Node*tmp=head;
while (tmp!=NULL)
{
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}


}
int main ()

{
  
  Node* head=NULL;
  

   cout<<"1. insert_at_tail"<<endl;
   cout<<"2. insert_at_position"<<endl;
   cout<<"3. insert_at head"<<endl;
   cout<<"4. print link list"<<endl;
   cout<<"5. terminate"<<endl;
   
while (true)
{
   int p;
   cin>>p;
   if(p==1)
   {
    cout<<"Enter your value"<<endl;
    int v;
    cin>>v;
    insert_at_tail(head,v);
    }

   else if(p==2)
   {
    cout<<"Enter your value and position:"<<endl;
    int v,p;
    cin>>p>>v;
insert_at_position(head,p,v);
   }

   else if(p==3)
   {
    cout<<"Enter your value"<<endl;
 int v;
    cin>>v;
insert_at_head(head,v);
   }

else if(p==4)

{
    print_link_list(head);
    }

else if(p==5) {break;}
}


    return 0;
}