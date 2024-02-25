// Enter address(house no,block,city,nam) of 5 people
#include <stdio.h>
struct address
{
    char name[20];
    int house_no;
    int block_no;
    char city[20];
};
int main()
{
    struct address details[5] =
    {
        {"Saksham", 5, 4, "Kushadevi"},
        {"Ram", 4, 56, "Jhapa"},
        {"Shyam", 34, 67, "Panauti"},
        {"Sita", 342, 12, "Kathmandu"},
        {"David", 34, 12, "Kanpur"}
    };
    for(int i =0;i<5;i++){
        printf("------Person no %d------\n",i+1);
        printf("The detail of %s is given below\n",details[i].name);
        printf("His house number is %d\n",details[i].house_no);
        printf("He lives in block no %d\n",details[i].block_no);
        printf("His address is %s\n",details[i].city);
        printf("--------------------------------\n");

    }
    return 0;
}


