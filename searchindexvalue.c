#include<stdio.h>
#include<stdlib.h>
struct node *creatlinkedlist(int arr[],int size);

int searchlinklist(struct node *head,int value);

struct node{
  int data;
  struct node *link;

};
int main(){
int a[]={34,74,56,64,54,23,89,97,55};
struct node *head;
head=creatlinkedlist(a,9);
while(head != NULL){
    printf("%d->",head->data);
    head=head->link;
}
printf("NULL");
printf("\n");

printf("index number:%d",searchlinklist(head,55));

return 0;
}
 int searchlinklist(struct node *head,int value){
 int count=1;
 while(head!=NULL){
    if(head->data==value){
        return count;
    }
    count++;
    head=head->link;
 }
 return -1;

 }
 struct node *creatlinkedlist(int arry[],int size){
    struct node *head=NULL,*current=NULL,*temp=NULL;
 int i;
 for(i=0;i<size;i++){
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=arry[i];
      temp->link=NULL;
      if(head==NULL){
        head=temp;
        current=temp;
      }
      else{
          current->link=temp;
          current=current->link;

      }
 }
 return head;

}
