#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   char input;
   vector<int>vec;
   do
   {
       cout<<"nhap 1 chu cai: ";
       cin>>input;
       if(input=='e')
        return 0;
       if(input=='c')
            {
                if(vec.size()!=0)
                    vec.clear();
                cout<<'\n'<<"nhap so phan tu cua day>0: ";
                int n;
                cin>>n;
                cout<<'\n'<<"nhap day: ";
                for(int i=1;i<=n;i++)
                {
                    int ptu;
                    cin>>ptu;
                    vec.push_back(ptu);
                }
            }
        if(input=='p')
            if(vec.size()==0)
                cout<<'\n'<<"day trong";
            else
            {
                cout<<'\n';
                for(int i=0;i<=vec.size()-1;i++)
                    cout<<vec[i]<<' ';
            }
        if(input=='i')
        {
            int ptu;
            cout<<'\n'<<"nhap them phan tu o cuoi day: ";
            cin>>ptu;
            vec.push_back(ptu);
        }
        if(input=='d')
        {
            int k;
            cout<<'\n'<<"nhap vi tri can xoa: ";
            cin>>k;
            vec.erase(vec.begin()+k-1,vec.begin()+k);
        }
        if(input=='s')
        {
            sort(vec.begin(),vec.end());
        }
        if(input=='x')
        {
            sort(vec.begin(),vec.end(),greater<int>());
        }
        if(input=='t')
        {
            cout<<'\n'<<"nhap so can tim: ";
            int cauhoi;
            cin>>cauhoi;
            bool kqua=false;
            for(int i=0;i<=vec.size()-1;i++)
            {
                if(vec[i]==cauhoi)
                {
                    kqua=true;
                    break;
                }
            }
            if(kqua==true)
                cout<<'\n'<<"so can tim co trong day";
            else
                cout<<'\n'<<"so can tim khong co trong day";
        }
        cout<<'\n';
   }
   while(1);

}

