# include <stdio.h>
void main(){
    struct Book{
        char tital[20];
        char author[20];
        int price;
    };

    struct Book b1 = { "C_Programming" ,"Ritchie", 350};
    struct Book b2 = { "DSA", "Karumanchi" , 500 };
    struct Book arr[] = {b1,b2};

    int num_book = 2;
    int avrage = 0;
    for(int i = 0; i<num_book;i++){
        printf("%s %s %d  / ",arr[i].tital,arr[i].author,arr[i].price);
        avrage += arr[i].price;
    }

    printf("Avarage = %d", avrage/num_book);
    
}