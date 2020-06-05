#include <iostream>

using namespace std;

struct term
{
    int co;
    int power;
    term *next;
};

int count_list(term *&head)
{
    if(head->next==NULL) return 0;
    else return 1+count_list(head->next);
}

int create(term *&head, term *&rear, term *&p)
{
    head = new term;
    rear = head;
    int n, coe, pow;
    cout<<"Please input the number of terms the polynomial has: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        p = new term;
        cout<<"Please input the coefficient and power of this term: ";
        cin>>coe>>pow;
        p->co = coe;
        p->power = pow;
        rear->next = p;
        rear = p;
    }
    rear->next = NULL;
    return count_list(*&head);
}

void illus(term *&head, term *&p)
{
    cout<<"\nresult: \n";
    p = head->next;
    int flag = 0;
    do{
    if(p->co!=0&&p->power!=0)
        {
            if(p->co!=1&&p->co!=-1){
                cout<<p->co<<"x^"<<p->power;
                flag++;
            }
            else if(p->co==1){
                cout<<"x^"<<p->power;
                flag++;
            }
            else{
                cout<<"-x^"<<p->power;
                flag++;
            }
        }
    else if(p->power==0)
        {
            cout<<p->co;
            flag++;
        }
    else p = p->next;
    }while(flag==0);
    p=p->next;
    while( p != NULL)
    {
        if(p->co!=0&&p->power!=0)
        {
            if(p->co!=1&&p->co!=-1)
                cout<<"+"<<p->co<<"x^"<<p->power;
            else if(p->co==-1)
                cout<<"-"<<"x^"<<p->power;
            else cout<<"+"<<"x^"<<p->power;
            p = p->next;
        }
        else if(p->power==0)
        {
            cout<<"+"<<p->co;
            p = p->next;
        }
        else p = p->next;
    }
}

int main()
{
    term *head, *rear, *p,*head1, *rear1, *p1,*head2, *rear2, *p2, *temp;
    int len1, len2;
    head = new term;
    rear = head;
    len1 = create(head1, rear1, p1);
    len2 = create(head2, rear2, p2);
    head = head1;
    p2=head2->next;
    for(int i=0;i<len2;i++)
    {
        p=head->next;
        for(int j =0;j<len1;j++)
            while(p->next!=NULL)
            {
                if(p2->power==p->power)
                {
                    p->co=p->co+p2->co;
                    break;
                }
                else p=p->next;
            }
         if(p2->power==p->power)
                p->co=p->co+p2->co;
         else
         {
             temp = new term;
             temp->co=p2->co;
             temp->power=p2->power;
             temp->next=NULL;
             p->next=temp;
         }
         p2=p2->next;
    }
    illus(head, p);
    delete head, rear, p,head1, rear1, p1, head2, rear2, p2,temp;
}
