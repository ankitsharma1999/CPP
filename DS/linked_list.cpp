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
            for(int i=1;i<n-1;i++)
            {
                temp2=temp2->next;
            }
            temp1->next=temp2->next;
            temp2->next=temp1;
        }
        

    }
    
    void Delete(int n)
    {
        node* temp = new node;
        node* temp_new = new node;
        if(n==1)
        {
            temp=head;
            temp=temp->next;
            head = temp;
        }
        else
        {
            temp=head;
            for(int i=1; i<n-1; i++)
            {
                temp=temp->next;
            }
            temp_new=temp->next;
            if(temp_new->next!=NULL)
            {
                temp_new=temp_new->next;
                temp->next=temp_new;
            }
            else
            {
                temp->next=NULL;
            }
            
        }
        
    }
    
    void Modify(int data, int n)
    {
        node* temp_1 = new node;
        node* temp_2 = new node;
        temp_2->data = data;
        if(n==1)
        {
            head->data=data;
        }
        else
        {
            temp_1=head;
            for(int i=1;i<n;i++)
            {
                temp_1=temp_1->next;
            }
            temp_1->data=data;
        }
        
    }

    void Display()
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
    A.Insert(10);
    A.Insert(11,11);
    A.Modify(10,11);
    A.Delete(11);
    A.Display();
    return 0;
}
