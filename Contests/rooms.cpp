    #include<iostream>

    using namespace std;

    int main(){
        int n;
        int rooms = 1;
        int checked_rooms = 1;
        int tmp;
        cin >> n;

        while(1){
            
            tmp = rooms;
            while(1){
                if(tmp%10 == 4 || tmp%10 == 9){
                    checked_rooms++;
                    break;
                }
                tmp = tmp/10;
                if(tmp==0) break;
            }

            if(rooms == n) {
                break;
            }

            rooms++;
            checked_rooms++;
        }
        cout << checked_rooms << endl;
        return 0;
    }