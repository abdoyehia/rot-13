#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
/*#include <bitset>
#include<fstream>
#include<cstdlib>*/
using namespace std;
int main()
{
 while(true)
    {
        cout<<"\nHello there  "<<endl;
        string text,ans;
        cout<<"Please Enter the message you want to Encrypt or decrypt:"<<endl;
        cin>>text;
        for(int i=0; i<text.size(); ++i)
            {
                if( ( (int)text[i]>=65 && (int)text[i]<=77 ) || ( (int)text[i]>=97 && (int)text[i]<=109 ) )
                {
                    ans+= ( ( char ) ( ( int ) text [ i ] + 13 ) );
                }
                else if( ( (int)text[i]>=78 && (int)text[i]<=90 ) || ( (int)text[i]>=110 && (int)text[i]<=122 ) )
                {
                    ans+= ( ( char ) ( ( int ) text [ i ] - 13 ) );
                }
                else if( text[i]==' ' )
                {
                    ans += ' ';
                    continue;
                }
                else
                {
                    cout<<"Please enter only letters !!"<<endl;
                    break;
                }
            }
            cout<<ans<<endl;
            cout<< "this program is made by ABYehiiia"<<endl ;
        }


}
