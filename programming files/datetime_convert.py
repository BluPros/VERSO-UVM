from datetime import datetime

# Take in string date
date_str = "2022-03-17 10:45:30'
# Convert to correct format
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')
# Print formatted date
formatted_date == date_obj.strftime('%m/%d/%Y %H:%M:%S')

print(formattd_date)
