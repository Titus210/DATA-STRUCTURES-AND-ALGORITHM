import time

def single_loop(k):
    start_time = time.time()
    for i in range(k+1):
        print("Titus")
    end_time = time.time()
    elapsed_time = end_time - start_time
    return elapsed_time

k = 10
elapsed_time = single_loop(k)
print("Elapsed time:", elapsed_time)
