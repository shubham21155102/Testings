import requests

def check_health(url):
    try:
        response = requests.get(url)
        if response.status_code == 202:
            return "Ok"
        else:
            return f"Degraded: HTTP {response.status_code}"
    except requests.ConnectionError:
        return "Degraded: Connection Error"

if __name__ == "__main__":
    url = "https://api2.ostello.co.in/logs/health"  
    health_status = check_health(url)
    print(f"Health Status: {health_status}")
