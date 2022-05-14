#include <bits/stdc++.h>
using namespace std;
struct Node_for_Queue
{
	int data_part;
	Node_for_Queue* next_part;
	Node_for_Queue(int value)
	{
		data_part = value;
		next_part = NULL;
	}
};
struct Queue
{
	Node_for_Queue *front_end, *rear_end;
	Queue()
	{
		front_end = rear_end = NULL;
	}
	void EnqueueOperation(int value)
	{
		Node_for_Queue* ptr = new Node_for_Queue( value);
		cout<<"After Element Inserted: ";
		if (rear_end == NULL)
        {
			front_end = rear_end = ptr;

            Node_for_Queue* ptr2=front_end;
            while(ptr2!=NULL)
            {
                cout<<ptr2->data_part<<"<--";
                ptr2=ptr2->next_part;

            }
            cout<<"\n";

		}
		else
        {
            rear_end->next_part = ptr;
            rear_end = ptr;

            Node_for_Queue* ptr2=front_end;
            while(ptr2!=NULL)
            {
                cout<<ptr2->data_part<<"<--";
                ptr2=ptr2->next_part;

            }
            cout<<"\n";
        }
	}
	void DequeueOperation()
	{
		if (front_end == NULL)
        {
            cout<<"Queue is empty\n";
        }
        else
        {
            Node_for_Queue* ptr = front_end;
            front_end = front_end->next_part;
            delete (ptr);
            if(front_end==NULL)
            {
                rear_end=NULL;
                cout<<"Queue is empty\n";
            }
            else
            {
                            cout<<"After Element Deleted ";
                            Node_for_Queue* ptr2=front_end;
                            while(ptr2!=NULL)
                            {
                                cout<<ptr2->data_part<<"-->";
                                ptr2=ptr2->next_part;

                            }
                            cout<<"\n";
            }
        }
	}
	void display()
	{

	    if (front_end==NULL || rear_end==NULL)
        {
            cout<<"Queue is empty\n";
        }
        else
        {
            cout<<"Elements in Queue: ";
            Node_for_Queue* ptr=front_end;
            while(ptr!=NULL)
            {
                cout<<ptr->data_part<<"  ";
                ptr=ptr->next_part;

            }
        }
	}
	void Position_of_front_And_rear()
	{

        	if(front_end==NULL || rear_end==NULL)
            {
                    cout<<"Queue is empty\n";
            }
            else
            {
                    cout << "Position of front in Queue : " << front_end->data_part << endl;
                    cout << "Position of rear in Queue  : " << rear_end->data_part<<endl;
            }
	}
};
int main()
{
	Queue ob;
	ob.EnqueueOperation(11);
	ob.EnqueueOperation(21);
	ob.EnqueueOperation(31);
	ob.EnqueueOperation(41);
	ob.EnqueueOperation(51);
    ob.EnqueueOperation(61);
	ob.EnqueueOperation(71);
	ob.EnqueueOperation(81);
	ob.EnqueueOperation(91);
    ob.EnqueueOperation(101);
	ob.EnqueueOperation(11);
	ob.EnqueueOperation(121);
	ob.EnqueueOperation(131);
	cout<<endl;
	ob.DequeueOperation();
	ob.DequeueOperation();
	ob.DequeueOperation();
    ob.DequeueOperation();
	ob.DequeueOperation();
	ob.DequeueOperation();
    cout<<endl;
	ob.Position_of_front_And_rear();
    cout<<endl;
	ob.display();
    cout<<endl;

	return 0;

}
