//#include <iostream>
//using namespace std;
//int arr[10];
//int n,m;
//bool isused[10];
//
//void recursive(int k)
//{
//    if(k>m)
//    {
//        for(int i = 1;i<=m;i++)
//            cout << arr[i] << ' ';
//        cout << '\n';
//        return;
//    }
//    
//    for(int i = 1;i<=n;i++)
//    {
//        if(!isused[i])
//        {
//            if(i<=arr[k-1]) continue;
//            isused[i] = 1;
//            arr[k] = i;
//            recursive(k+1);
//            isused[i]= 0;
//        }
//    }
//}
//
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    recursive(1);
//}
//
