// name : "fatima abdalla alageb". 
// department : "computer".
// band : "second band".

// step(1) : "Define the scripts we need in writing the code".
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// step(2) : "make big class and we call it linked list" .
class linkedlist {

// step(3) : "make struct and we call it node" .    
      struct Node
      {
        int item;
        string item;
        Node *next;
    };
    public:
        

// step(4) : "make the linkedlist class public" .
    public:

// step(5) : "make two node first and last and difine int" .
    Node*first = NULL;
    Node*last = NULL;
    int length = 0;


// step(6) : "make function bool to test the linke if it empty or not empty" .
    bool is empty()
    {
        return length == 0;
    }


// step(7) : "make the addition function from front to add first element" .
    void insirtfirst(int number)
    {
        Node *newNode = new Node;
        new Node->item = number;
        if(length == 0)
        {
            first=last=new Node;
            new Node->next = NULL;
        }
    }
    else
    {
        {
            new Node->next = first;
            first = newNode;
        }
    }
    
    length ++;


// step(8) : "make addition function from any position on the link to add second element" .
    void insertAtpos(int pos , string name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = name;
        if(pos == 0)
        insertfirst(name);
        else if (pos == length)
        insertlast(name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(9) : "make addition function from any position on the link to add third element" .
    void insertAtpos(int pos , string nick_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = nick_name;
        if(pos == 0)
        insertfirst(nick_name);
        else if (pos == length)
        insertlast(nick_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(10) : "make addition function from any position on the link to add four element" .
    void insertAtpos(int pos , string email)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = email;
        if(pos == 0)
        insertfirst(email);
        else if (pos == length)
        insertlast(email);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(11) : "make addition function from any position on the link to add five element" .
    void insertAtpos(int pos , string location)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = location;
        if(pos == 0)
        insertfirst(location);
        else if (pos == length)
        insertlast(location);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(12) : "make addition function from any position on the link to add six element" .
    void insertAtpos(int pos , string language)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = language;
        if(pos == 0)
        insertfirst(language);
        else if (pos == length)
        insertlast(language);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(13) : "make addition function from any position on the link to add seven element" .
    void insertAtpos(int pos , string note)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = note;
        if(pos == 0)
        insertfirst(note);
        else if (pos == length)
        insertlast(note);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(14) : "make addition function from any position on the link to add eight element" .
    void insertAtpos(int pos , string job)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = job;
        if(pos == 0)
        insertfirst(job);
        else if (pos == length)
        insertlast(job);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(15) : "make addition function from any position on the link to add nine element" .
    void insertAtpos(int pos , string gender)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = gender;
        if(pos == 0)
        insertfirst(gender);
        else if (pos == length)
        insertlast(gender);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }



// step(16) : "make addition function from any position on the link to add ten element" .
    void insertAtpos(int pos , string given_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = given_name;
        if(pos == 0)
        insertfirst(given_name);
        else if (pos == length)
        insertlast(given_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(17) : "make addition function from any position on the link to add eleven element" .
    void insertAtpos(int pos , string addition_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = addition_name;
        if(pos == 0)
        insertfirst(addition_name);
        else if (pos == length)
        insertlast(addition_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(18) : "make addition function from any position on the link to add twelve element" .
    void insertAtpos(int pos , string family_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = family_name;
        if(pos == 0)
        insertfirst(family_name);
        else if (pos == length)
        insertlast(family_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(19) : "make addition function from any position on the link to add thirteen element" .
    void insertAtpos(int pos , string yomi_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = yomi_name;
        if(pos == 0)
        insertfirst(yomi_name);
        else if (pos == length)
        insertlast(yomi_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(20) : "make addition function from any position on the link to add fourteen element" .
    void insertAtpos(int pos , string given_yomi_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = given_yomi_name;
        if(pos == 0)
        insertfirst(given_yomi_name);
        else if (pos == length)
        insertlast(given_yomi_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(21) : "make addition function from any position on the link to add fifteen element" .
    void insertAtpos(int pos , string additional_yomi_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = additional_yomi_name;
        if(pos == 0)
        insertfirst(additional_yomi_name);
        else if (pos == length)
        insertlast(additional_yomi_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }

// step(22) : "make addition function from any position on the link to add sixteen element" .
    void insertAtpos(int pos , string family_yomi_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item =family_yomi_name ;
        if(pos == 0)
        insertfirst(family_yomi_name);
        else if (pos == length)
        insertlast(family_yomi_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(23) : "make addition function from any position on the link to add seventeen element" .
    void insertAtpos(int pos , string name_prefix)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = name_prefix;
        if(pos == 0)
        insertfirst(name_prefix);
        else if (pos == length)
        insertlast(name_prefix);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(24) : "make addition function from any position on the link to add eighteen element" .
    void insertAtpos(int pos , string name_suffix)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = name_suffix;
        if(pos == 0)
        insertfirst(name_suffix);
        else if (pos == length)
        insertlast(name_suffix);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(25) : "make addition function from any position on the link to add ninteen element" .
    void insertAtpos(int pos , string short_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = short_name;
        if(pos == 0)
        insertfirst(short_name);
        else if (pos == length)
        insertlast(short_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(26) : "make addition function from any position on the link to add twenty element" .
    void insertAtpos(int pos , string media_name)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = media_name;
        if(pos == 0)
        insertfirst(media_name);
        else if (pos == length)
        insertlast(media_name);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(27) : "make addition function from any position on the link to add twenty one element" .
    void insertAtpos(int pos , string initials)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = initials;
        if(pos == 0)
        insertfirst(initials);
        else if (pos == length)
        insertlast(initials);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(28) : "make addition function from any position on the link to add twenty two element" .
    void insertAtpos(int pos , string billing_information)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = billing_information;
        if(pos == 0)
        insertfirst(billing_information);
        else if (pos == length)
        insertlast(billing_information);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(29) : "make addition function from any position on the link to add twenty three element" .
    void insertAtpos(int pos , string directory_server)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = directory_server;
        if(pos == 0)
        insertfirst(directory_server);
        else if (pos == length)
        insertlast(directory_server);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(30) : "make addition function from any position on the link to add twenty four element" .
    void insertAtpos(int pos , string mileage)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = mileage;
        if(pos == 0)
        insertfirst(mileage);
        else if (pos == length)
        insertlast(mileage);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(31) : "make addition function from any position on the link to add twenty five element" .
    void insertAtpos(int pos , string occupation)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = occupation;
        if(pos == 0)
        insertfirst(occupation);
        else if (pos == length)
        insertlast(occupation);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(32) : "make addition function from any position on the link to add twenty six element" .
    void insertAtpos(int pos , string hobby)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = hobby;
        if(pos == 0)
        insertfirst(hobby);
        else if (pos == length)
        insertlast(hobby);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(33) : "make addition function from any position on the link to add twenty seven element" .
    void insertAtpos(int pos , string sensitivity)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = sensitivity;
        if(pos == 0)
        insertfirst(sensitivity);
        else if (pos == length)
        insertlast(sensitivity);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(34) : "make addition function from any position on the link to add twenty eight element" .
    void insertAtpos(int pos , string priority)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = priority;
        if(pos == 0)
        insertfirst(priority);
        else if (pos == length)
        insertlast(priority);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(35) : "make addition function from any position on the link to add twenty nine element" .
    void insertAtpos(int pos , string subject)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = subject;
        if(pos == 0)
        insertfirst(subject);
        else if (pos == length)
        insertlast(subject);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(36) : "make addition function from any position on the link to add thirty element" .
    void insertAtpos(int pos , string photo)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = photo;
        if(pos == 0)
        insertfirst(photo);
        else if (pos == length)
        insertlast(photo);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(37) : "make addition function from any position on the link to add thirty one element" .
    void insertAtpos(int pos , string groub_membership)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = groub_membership;
        if(pos == 0)
        insertfirst(groub_membership);
        else if (pos == length)
        insertlast(groub_membership);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(38) : "make addition function from any position on the link to add thirty two element" .
    void insertAtpos(int pos , string title)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = title;
        if(pos == 0)
        insertfirst(title);
        else if (pos == length)
        insertlast(title);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(39) : "make addition function from any position on the link to add thirty three element" .
    void insertAtpos(int pos , string department)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = department;
        if(pos == 0)
        insertfirst(department);
        else if (pos == length)
        insertlast(department);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(40) : "make addition function from any position on the link to add thirty four element" .
    void insertAtpos(int pos , string symblo)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = symblo;
        if(pos == 0)
        insertfirst(symblo);
        else if (pos == length)
        insertlast(symblo);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(41) : "make addition function from any position on the link to add thirty five  element" .
    void insertAtpos(int pos , string job_describtion)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = job_describtion;
        if(pos == 0)
        insertfirst(job_describtion);
        else if (pos == length)
        insertlast(job_describtion);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(42) : "make addition function from any position on the link to add thirty six element" .
    void insertAtpos(int pos , string type)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = type;
        if(pos == 0)
        insertfirst(type);
        else if (pos == length)
        insertlast(type);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(43) : "make addition function from any position on the link to add thirty seven element" .
    void insertAtpos(int pos , string value)
    if (pos < 0 || pos >length)
    cout << " out of range ";
    else
    {
        Node * newNode = new Node;
        newNode->item = value;
        if(pos == 0)
        insertfirst(value);
        else if (pos == length)
        insertlast(value);
        else
        {
            Node * curr = first;
            for(size_t i = 1 ; i<pos ; i++)
            {
                curr=curr-> next;
            }
            newNode->next=curr->next;
            curr->next = new Node;
            length ++;
        }
        
    }


// step(44) : "make addtion function from back to add thirty eight element" .
     void insirtlast(int birthday)
    {
        Node *newNode = new Node;
        new Node->item = birthday;
        if(length == 0)
        {
            first=last=new Node;
            new Node->next = NULL;
        }
    }
    else
    {
        {
            last->next = new Node;
            newNode->next = NULL;
            last = newNode;
        }
    }
    
    length ++;

    
// srep(45) : "make deleteing function from first" .
    void removefirst()
    {
        if (length == 0)
        cout<< "empty list cant remove";
        else if (length == 1)
        {
            delete first ;
            last = first = NULL;
            length --;
        }
        else
        {
            Node * curr = first;
            first = first->next;
            delete curr;
            lenght = length - 1;
        }
        
    }

    
// step(46) : "make deleteing function from back" .
void removelast()
{
    Node*curr = first->next
    Node*prev = first;

    else
    {
        if(length == 0)
        {
            return;
        }
        else if(length == 1)
        {
            delete first;
        }
        last = first = NULL;
        length = length - 1;

        while (curr !=last)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next=NULL;
        last = prev;
        length = length - 1;
    } 
}


// step(47) : "make deleteing function from any position on the linked list for int element" .
void remove(int element)
{
    if(is empty())
    {
        return;
    }
    Node*curr;
    Node*prev;
    if(first->item==element)
    {
        curr = first;
        first = first->next;
        delete curr;
        length = length - 1;
        if(length==0)
        {
            last = NULL;
        }
    }
    else
    {
        curr = first->next;
        prev=first;
        while(curr!=NULL)
        {
            if(curr->item==element)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        } 
    }
    if(curr==NULL)
    {
        cout<<"not found";
    }
    else
    {
        prev->next=curr->next;
        if(last==curr)
        {
            last=prev;
        }
        delete curr;
        length = length - 1;
    }
}


// step(48) : "make deleteing function from any position on the linked list for string element" .
void remove(string element)
{
    if(is empty())
    {
        return;
    }
    Node*curr;
    Node*prev;
    if(first->item==element)
    {
        curr = first;
        first = first->next;
        delete curr;
        length = length - 1;
        if(length==0)
        {
            last = NULL;
        }
    }
    else
    {
        curr = first->next;
        prev=first;
        while(curr!=NULL)
        {
            if(curr->item==element)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        } 
    }
    if(curr==NULL)
    {
        cout<<"not found";
    }
    else
    {
        prev->next=curr->next;
        if(last==curr)
        {
            last=prev;
        }
        delete curr;
        length = length - 1;
    }
}


// step (49) : "make saerch function for interger element" .
bool search(Node* head, int number)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == number)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (50) : "make saerch function for interger element" .
bool search(Node* head, int birthday)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == birthday)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  

// step(51) : "make search function for string element" .
bool search(Node* head, string name)  
{  
    Node* curr = head;  
    while (curr != NULL)  
    {  
        if (curr->key == name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (52) : "make saerch function for interger element" .
bool search(Node* head, string nick_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == nick_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (53) : "make saerch function for interger element" .
bool search(Node* head, string email)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == email)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (54) : "make saerch function for interger element" .
bool search(Node* head, string location)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == location)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (55) : "make saerch function for interger element" .
bool search(Node* head, string languge)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == languge)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (56) : "make saerch function for interger element" .
bool search(Node* head, string note)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == note)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (57) : "make saerch function for interger element" .
bool search(Node* head, string job)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == job)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (58) : "make saerch function for interger element" .
bool search(Node* head, string gender)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == gender)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (59) : "make saerch function for interger element" .
bool search(Node* head, string given_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == given_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (60) : "make saerch function for interger element" .
bool search(Node* head, string additional_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == additional_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (61) : "make saerch function for interger element" .
bool search(Node* head, string family_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == family_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (62) : "make saerch function for interger element" .
bool search(Node* head, string yomi_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == yomi_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (63) : "make saerch function for interger element" .
bool search(Node* head, string given_yomi_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == given_yomi_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (64) : "make saerch function for interger element" .
bool search(Node* head, string additional_yomi_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == additional_yomi_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (65) : "make saerch function for interger element" .
bool search(Node* head, string family_yomi_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == family_yomi_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (66) : "make saerch function for interger element" .
bool search(Node* head, string name_prefix)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == name_prefix)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (67) : "make saerch function for interger element" .
bool search(Node* head, string name_sufix)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == name_sufix)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (68) : "make saerch function for interger element" .
bool search(Node* head, string short_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == short_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (69) : "make saerch function for interger element" .
bool search(Node* head, string media_name)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == media_name)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (70) : "make saerch function for interger element" .
bool search(Node* head, string intials)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == initials)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (71) : "make saerch function for interger element" .
bool search(Node* head, string billing information)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == billing information)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (72) : "make saerch function for interger element" .
bool search(Node* head, string direction server)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == direction server)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (73) : "make saerch function for interger element" .
bool search(Node* head, string mileagl)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == mileagl)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (74) : "make saerch function for interger element" .
bool search(Node* head, string occupation)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == occupation)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (75) : "make saerch function for interger element" .
bool search(Node* head, string hobby)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == hobby)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (76) : "make saerch function for interger element" .
bool search(Node* head, string sensitivity)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == sensitivity)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (77) : "make saerch function for interger element" .
bool search(Node* head, string priority)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == priority)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (78) : "make saerch function for interger element" .
bool search(Node* head, string subject)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == subject)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (79) : "make saerch function for interger element" .
bool search(Node* head, string photo)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == photo)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (80) : "make saerch function for interger element" .
bool search(Node* head, string groub_membership)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == groub_membership)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (81) : "make saerch function for interger element" .
bool search(Node* head, string titel)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == titel)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (82) : "make saerch function for interger element" .
bool search(Node* head, string department)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == department)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (83) : "make saerch function for interger element" .
bool search(Node* head, string symbol)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == symbol)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  


// step (84) : "make saerch function for interger element" .
bool search(Node* head, string job_description)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == job_description)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (85) : "make saerch function for interger element" .
bool search(Node* head, string type)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == type)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  



// step (86) : "make saerch function for interger element" .
bool search(Node* head, string value)  
{  
    Node* curr = head; 
    while (curr != NULL)  
    {  
        if (curr->key == value)  
            return true;  
        curr = curr->next;  
    }  
    return false;  
}  




// step(87) : "make print function to print the element that we have entered" .
    void print (){
        Node*curr = first;
        while (curr != NULL)
        {
            cout <<curr->item <<"  ";
            cur=curr->next;
        }
    }

};

int main()
{

// step(88) : "add the element" .
    linkedlist 1;
    1. insertfirst();
    1. insertlast();
    1. insertlast();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();
    1. insertpos();

 // step(89) : "remove the element" .    
    1. removefirst();
    1. removelast();
    1. remove();

// step(90) : "serch for element" .
 struct Node *head = NULL;
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );
    push(&head, );

 head = modifyTheList(head);
    cout << "Modified List:" << endl;
    printList(head);

    return 0;
}