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
        (*temp).data = n;
        (*temp).next = NULL;

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
    A.Insert(10);
    A.Insert(11);
    A.display();
    return 0;
}
