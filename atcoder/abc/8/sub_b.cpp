#include <cstdio>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    int N;
    scanf("%d", &N);
 
    map<string, int> votes;
    for (int i=0; i<N; ++i) {
        char buf[64];
        scanf("%s", buf);
        string S(buf);
 
        ++votes[S];	//mapは(char,int) (string,int)など(key,value)のpair
	printf("%s- %d\n", buf,votes[S]);
    }
 
    string res;
    int num=0;
    for (auto &item: votes)
        if (num < item.second) {
            res = item.first;
            num = item.second;
        }
 
    printf("%s\n", res.c_str());
    return 0;
}
