// TOKENIZING MODULE SORCE
#define _CRT_SECURE_NO_WANINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V3
    printf("*** Start of Tokenizing Phrases Demo");
    char    sentences[BUFFER_SIZE];
    char*   nextSentence = NULL;
    int     sentencesCounter;
    do{
        printf("Type a few sentences seperated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';
        if((strcmp(sentences, "q") != 0)){
            nextSentence = strtok(sentences, ",");
            sentencesCounter = 1;
            while(nextSentence) {
                printf("Senetnce #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ",");
            }
        }
    }while(strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");