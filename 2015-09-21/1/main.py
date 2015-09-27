# import sys

if __name__ == '__main__':
    M      = int(input())
    N      = int(input())
    gus    = 'H'
    length = 0

    for i in range(N):
        act = input()

        if length < M:
            if act == 'P':
                gus += 'P'
                length += 1
            elif act == 'A':
                gus += 'A'
                length += 1
            elif act == 'C':
                if length == M-1:
                    gus += 'C'
                    length += 1
                else:
                    gus += 'CC'
                    length += 2
        if act == 'Q' and len(gus) > 1: # Q
            gus = 'H' + gus[2:]
            length -= 1

    print(gus)
