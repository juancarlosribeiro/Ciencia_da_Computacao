import psutil

for proc in psutil.process_iter(['pid', 'name']):
    try:
        print(f"PID: {proc.info['pid'] }, Nome: {proc.info['name']}")
    except(psutil.NosuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass           