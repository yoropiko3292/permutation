#include<iostream>
#include<string>

using namespace std;

int main(){
    string S = "";
    cin >> S;
    for(int i = S.size() - 1;i >= 0;i--){
        int n = 0;
        for(int j = 0;j <= i;j++){
            if(S[n] < S[j]) n = j;
        }
        swap(S[i],S[n]);
    }
    cout << S << endl;
    int f = 1;
    int n = S.size();
    while(n != f){
        if(S[n - f - 1] < S[n - f]){
            for(int i = 0;i < f / 2;i++){
                swap(S[n - i - 1],S[n - f + i]);
            }
            for(int i = 0;i < n;i++){
                if(S[n - f - 1] < S[n - f + i]){
                    swap(S[n - f - 1],S[n - f + i]);
                    break;
                }
            }
            cout << S << endl;
            f = 1;
        }else{
            f++;
        }
    }
    system("pause");
    return 0;
}
