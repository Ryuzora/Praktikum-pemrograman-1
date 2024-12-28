a,b = map(int, input().split())

def reverse(nilai):
    sisa = 0
    reverse = 0

    while nilai != 0:
        sisa = nilai % 10
        reverse = reverse * 10 + sisa
        nilai //= 10
    return reverse

a = reverse(a)
b = reverse(b)
c = a+b
print(reverse(c))