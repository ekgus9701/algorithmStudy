#include<iostream>

using namespace std;

int main(){
    int n;
    int dp[101][10]={0,}; //길이 2에 1로 끝나는 수 ->dp[2][1]
    long long ans=0;
    cin>>n;
    for(int i=1;i<10;i++){
        dp[1][i]=1;
    }
    
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                dp[i][j]=dp[i-1][j+1];
            }
            
            else if(j==9){
                dp[i][j]=dp[i-1][j-1];
            }
            
            else{
                dp[i][j]=dp[i-1][j+1]+dp[i-1][j-1];
            }
            dp[i][j]%=1000000000;
        }
    }
    
    for(int i=0;i<10;i++){
        ans+=dp[n][i];
        //cout<<dp[n][i]<<endl;
    }
    
    cout<<ans%1000000000;
}
