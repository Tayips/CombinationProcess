#include <stdio.h>

int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktoriyel(n - 1);
}

int kombinasyon(int n, int r) {
    return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
}

int main() {
    int n, r;
    
    printf("n ve r degerlerini girin (n r): ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Hatali girdi: r degeri n degerinden buyuk olamaz.\n");
        return 1;
    }

    printf("C(%d, %d) = %d\n", n, r, kombinasyon(n, r));

    return 0;
}
