#include<stdio.h>

int main(){
    FILE*fp;
    fp = fopen("feedback.txt","w");

    if (fp==NULL){
        printf("FILE cannot be open");
        return 1;
    }
    fprintf(fp,"FEED ABOUT C PROGRAMMING:\n\n"//I am not write my name bcoz this is gonna be in my github,so ofc you know my name
            "before talking about C , I am gonna talk about coding.I started my coding with cpp✌️✌️.\n"
            "I chose CPP becoz I wanna build my own game. after finishing 'HELLO WORLD'somehow I liked coding.\n"
            "Moreover I don't have that much patience,I Installed GODOT and build my first 2d game with just collision bodies with AI\n"
            "when they bring C in clg,I also liked that and but it feels like they are rushing but at the same time it likes ther are slow.\n"
            "anyways feed back fo mine doesn't look alike a feed back\n\n\n\n");
    fclose(fp);
    printf("written successfully\n\n\n");

    fp = fopen("feedback.txt","a");

    fprintf(fp,"FEEDBACK about C Trainer:\n"
            "he is okay, and he ask lot of questions then only students would think why and how everything is working \n"
            "but most students wont understand that , I think thats all ...\n");
            fclose(fp);
            printf("appended succesfully");//i think thereis a lot of spelling mistake in these feed back.. 

    return 0;
}