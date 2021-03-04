#include<iostream>
#include<string>

using namespace std;

typedef struct {
    int number;
    string name;
    struct List *next;
}List;

List* addList(List *list, int number, string name){
    List *item;
    List *top;
    top = list; //すでに存在するリストの最初のポインタを格納
    item = (List*)malloc(sizeof(List)); //メモリを確保
    //各要素へ代入
    item->number = number;
    item->name = name;
    item -> next = NULL;
    
    if(list == NULL){
        list = item;
        return list;
    }

    while(list->next != NULL){
        list = list->next;
        }
    list->next = item;

  /* ここでreturnする場合は先頭アドレスは変わらない */
    return top;
}

void ShowList(struct List *list){
    int i = 1;
    while(list != NULL){
        cout << i << "個目" << endl;
        cout << list->number << endl;
        cout << list->name << endl;
        i++;
        list = list -> next;
    }
}

int main(){

    struct List *list = NULL;
    struct List *list1 = addList(list,1,"a");
    struct List *list2 = addList(list1,2,"b");
    struct List *list3 = addList(list2,3,"c");
    ShowList(list3);

    return 0;
}