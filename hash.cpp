#include <iostream>
#define SIZE 10
using namespace std;

int hach(int key)
{
    return key%SIZE;
}

int probe(int *H,int key)
{
    int index=hach(key);
    int i=0;
    while(H[(index+i)%SIZE]!=0)
    i++;
    return (index+i)%SIZE;
}

void insert(int *H,int key)
{
    int index=hach(key);
    if(H[index]!=0)
        index= probe(H,key);
         H[index]=key;
}
void display(int *H)
{
   for(int i=0;i<SIZE;i++)
   {
       cout<<i<<" - "<<H[i]<<endl;
   }
}

int main()
{
  int HT[10]={0};
  insert(HT,12);
  insert(HT,25);
  insert(HT,35);
  insert(HT,26);
  insert(HT,86);
  display(HT);
    return 0;

}
