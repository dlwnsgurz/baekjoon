//#include <bits/stdc++.h>
//using namespace std;
//
//int field[10];
//int arr[10];
//int n,m;
//
//void func(int k)
//{
//    if(k==m)
//    {
//        for(int i =0;i<m;i++)
//            cout << arr[i] << ' ';
//        cout << '\n';
//        return;
//    }
//    int temp = 0;
//    for(int i = 0;i<n;i++)
//    {
//        if(temp!=field[i])
//        {
//            arr[k] = field[i];
//            temp = arr[k];
//            func(k+1);
//        }
//    }
//}
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i = 0;i<n;i++)
//        cin >> field[i];
//    sort(field,field+n);
//    func(0);
//}
