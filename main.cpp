#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    int i,j,length=0;
    cout<<"Enter Text:";
    cin>>a;
    cout<<"Text:"<<a;
    length=strlen(a);
    for(i=0;i<length;i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
            for(j=i;j<length;j++)
            {
                a[j]=a[j+1];
            }
        length--;
        }
    }
    cout<<"\nAfter Deleting Vowels, Text:"<<a;
    return 0;
}
