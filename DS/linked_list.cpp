# include <iostream>

struct node
{
    int data;
    node* next;
};

class linked_list
{
    private:
        node *head, *tail;
    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

    void Insert(int n)
    {
        node* temp = new node;
        temp->data = n;
        temp->next = NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
        
    }

    void Insert(int data, int n)
    {
        node* temp1 = new node;
        node* temp2 = new node;
        temp1->data=data;
        temp1->next=NULL;
        if(n==1)
        {
            temp1->next=head;
            head = temp1;
        }
        else
        {
            temp2=head;
            for(int i=0;i<n-2;i++)
            {
                temp2=temp2->next;
            }
            temp1->next=temp2->next;
            temp2->next=temp1;
        }
        

    }

    void display()
    {
        node* tmp;
        tmp = head;
        while(tmp!=NULL)
        {
            std::cout<<tmp->data<<std::endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list A;
    A.Insert(1);
    A.Insert(2);
    A.Insert(3);
    A.Insert(4);
    A.Insert(5);
    A.Insert(6);
    A.Insert(7);
    A.Insert(8);
    A.Insert(9);
    A.Insert(11,1);
    A.Insert(10,3);
    A.display();
    return 0;
}
