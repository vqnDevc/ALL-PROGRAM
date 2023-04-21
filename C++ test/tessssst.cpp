#include<bits/stdc++.h>
int main(){
	int nam;
    printf("Nhap nam : ");
    scanf("%d",&nam);
    char *can[10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
    char *chi[12]={"Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui"};
    printf("Happy new year %d %s %s",nam,can[nam%10],chi[nam%12]);
	 return 0;
}

