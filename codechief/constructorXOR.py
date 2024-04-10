def construct_xor(N, S):
    if S % 2 != 0 or (N == 1 and S % 2 == 0):
        return [-1]
    if N == 1:
        return [1]
    if N == 2:
        return [S // 2, S // 2]

    # For N > 2
    arr = [1] * N
    total = N

    # Adjust the last element to make the sum S
    arr[-1] = S - (N - 1)
    total = S

    # Ensure XOR is 0
    xor = 0
    for i in range(N):
        xor ^= arr[i]

    if xor != 0:
        for i in range(1, N - 1):
            if arr[i] != 0:
                arr[i] ^= 1
                arr[-1] ^= 1
                break

    return arr


T = int(input().strip())
for _ in range(T):
    N, S = map(int, input().strip().split())
    result = construct_xor(N, S)
    print(*result)
