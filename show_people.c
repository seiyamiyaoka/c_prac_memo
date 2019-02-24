void ShowPeople(People data)
{
    char sex[16];

    printf("名前:%s\n",data.name);
    printf("年齢:%d\n",data.age);

    if (data.sex == 1) {
        strcpy(sex,"男性");
    } else {
        strcpy(sex,"女性");
    }

    printf("性別:%s\n",sex);
    printf("\n");
}