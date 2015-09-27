if __name__ == '__main__':
    cadena  = input()
    pila    = []
    cola    = []
    es_pila = False

    for letra in cadena:
        if letra == '(':
            es_pila = not es_pila
        elif letra == ')':
            if es_pila:
                while True:
                    c = pila.pop()
                    if c == '(': break
                    cola.append(c)
            else:
                sub = []
                while True:
                    c = pila.pop()
                    if c == '(': break
                    sub.append(c)
                while len(sub):
                    cola.append(sub.pop())
            es_pila = not es_pila

        if letra != ')':
            if es_pila:
                pila.append(letra)
            else:
                cola.append(letra)

        print(pila)
        print(cola)

    print(''.join(cola))
