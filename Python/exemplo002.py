import threading
import time

def tarefa():
    print("Inicio...")
    time.sleep(2)
    print("Fim...")

# Bloco Principal (main)

thread = threading.Thread(target= tarefa)
thread.start() #Inicia a thread
#thread.join() #Aguarda a conclusão da thread
print("Thread principal finalizada")