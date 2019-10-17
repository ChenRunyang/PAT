#include<stdio.h>

int main() {
    int PGalleon, PSickle, PKnut;
    int AGalleon, ASickle, AKunt;
    int Galleon, Sickle, Kunt;
    int PAllKnut, AAllKnut;

    scanf("%d.%d.%d %d.%d.%d", &PGalleon, &PSickle, &PKnut, &AGalleon, &ASickle, &AKunt);

    PAllKnut = PGalleon * 17 * 29 + PKnut;
    AAllKnut = AGalleon * 17 * 29 + AKunt;

    if (AAllKnut > PAllKnut) {
        if (AKunt >= PKnut) {
            Kunt = AKunt - PKnut;
        }
        else{
            if (ASickle != 0) {
                ASickle -= 1;
                AKunt += 29;
                Kunt = AKunt - PKnut;
            }
            else {
                AGalleon -= 1;
                ASickle += 17;
                ASickle -= 1;
                AKunt += 29;
                Kunt = AKunt - PKnut;
            }
        }
        if (ASickle >= PSickle) {
            Sickle = ASickle - PSickle;
        }
        else {
            AGalleon -= 1;
            ASickle += 17;
            Sickle = ASickle - PSickle;
        }
        Galleon = AGalleon - PGalleon;

        printf("%d.%d.%d", Galleon, Sickle, Kunt);
    }
    else if (AAllKnut == PAllKnut) {
        printf("0.0.0");
    }
    else {
        printf("-");
        if (PKnut >= AKunt) {
            Kunt = PKnut - AKunt;
        }
        else {
            if (PSickle != 0) {
                PSickle -= 1;
                PKnut += 29;
                Kunt = PKnut - AKunt;
            }
            else {
                PGalleon -= 1;
                PSickle += 17;
                PSickle -= 1;
                PKnut += 29;
                Kunt = PKnut - AKunt;
            }
        }
        if (PSickle >= ASickle) {
            Sickle = PSickle - ASickle;
        }
        else {
            PGalleon -= 1;
            PSickle += 17;
            Sickle = PSickle - ASickle;
        }
        Galleon = PGalleon - AGalleon;

        printf("%d.%d.%d", Galleon, Sickle, Kunt);
    }

    return 0;
}
