//正解プログラムのコードをレビュー
#define ll long long 
#define ld long double
#define pb push_back
#define vl vector
#define ff first
#define ss second
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ll a,b,i,j,n,t,c,m;
    cin >> n;
    vl<string> s(n);
    for(i=0;i<n;i++) cin>>s[i];
    for(i=0;i<n;i++) sort(s[i].begin(),s[i].end());//入力された文字をソート
    sort(s.begin(),s.end());//文字列配列をソートする
    ll count=0;
    ll ans=0;
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1]) count++;//同じ文字の入力があることをカウント
        else
        {
            //あくまで続きがある前提で計算するため終了時の計算はしない。終了時の計算はこの後
            ans+=((count)*(count+1))/2;//文字が変わったので今まで出てきた文字の数で組み合わせを求める。(組み合わせの計算)
            count=0;
        }
    }
    ans+=((count)*(count+1))/2;//最後にしっかり組み合わせの計算をして全探索終了
    cout<<ans;
}
