#include<stdio.h>
int main(){
	int choose;
	
	do {
	printf("\n\t============================================");
	printf("\n\t     Welcome To Short News Area Network");
	printf("\n\t============================================");
	printf("\n\t | 1. Politics    |");
	printf("\n\t | 2. Sports      |");
	printf("\n\t | 3. Weather     |");
	printf("\n\t | 4. Covid       |");
	printf("\n\t | 5. Education   |");
	printf("\n\t | 6. World       |");
	printf("\n\t | 7. Exit        |");
	printf("\n\t-----------------------------------------------");
	
	printf("\n\n\tChoose Your News Topics: ");
	scanf("%d",&choose);
	
	
	
	switch(choose){
		case 1:
			printf("\n\t ==================");
			printf("\n\t | Politics News  |");
			printf("\n\t ==================");
			printf("\n\n1. Mulayam Singh tried to convince Aparna Yadav not to join BJP: Akhilesh Yadav");
			printf("\n\n2. BJP walking on thin ice in Bengal amid infighting, bickerings");
			printf("\n\n3. Supreme Court to consider hearing PIL challenging use of EVMs in polls");
			printf("\n\n4. BJP's blow to Yadav clan, aims to break dynastic politics with Aparna joining its ranks");
			printf("\n\n5. UP polls: Mulayam Singh's daughter-in-law Aparna Yadav joins BJP\n\n\n");
			break;
		case 2:
			printf("\n\t ==================");
			printf("\n\t |   Sports News  |");
			printf("\n\t ==================");
			printf("\n\n1. Sania Mirza announces retirement: 2022 will be her final season on the WTA tour");
			printf("\n\n2. South Africa beat India by 31runs to take 1-0 lead in the three-match series.");
			printf("\n\n3. Star India opener Smriti Mandhana was on Wednesday named in the ICC T20 women's Team of the Year for her superlative show in the format in 2021");
			printf("\n\n4. Djokovic holds 80% of Danish biotech developing COVID treatment: CEO");
			printf("\n\n5. The International Cricket Council (ICC) has congratulated Mafor officiating in 100 men's One Day Internationals\n\n\n");
			break;
		case 3:
			printf("\n\t ==================");
			printf("\n\t |  Weather News  |");
			printf("\n\t ==================");
			printf("\n\n1. Ladakh, Sikkim and Arunachal Pradesh to Witness Snowfall Activity; Dense Fog in Punjab, Haryana and Delhi");
			printf("\n\n2. Cold Wave To Sweep Punjab, Haryana, Delhi In Next 2 Days: Weather Office");
			printf("\n\n3. Rain Possible Over Andhra Pradesh, Tamil Nadu; Cold Day for Punjab, Delhi, Uttar Pradesh");
			printf("\n\n4. Tonga Tragedy: Here’s Why Volcanic Eruptions in Pacific Ocean Stunned the World");
			printf("\n\n5. Search for Survivors Continues After Earthquake Strikes Afghanistan; 26 Deaths, 700-1,000 Damaged Houses Reported So Far\n\n\n");
			break;
		case 4:
			printf("\n\t ==================");
			printf("\n\t |   Covid News   |");
			printf("\n\t ==================");
			printf("\n\n1. Bihar on Wednesday recorded 4,063 fresh coronavirus cases, 488 less than the previous day’s figure.");
			printf("\n\n2. Too early to say Delhi, Mumbai have hit their Covid-19 third wave peak: Top govt scientist");
			printf("\n\n3. Coronavirus Omicron India Live Updates: Kerala sees 34,199 Covid cases, positivity rate jumps to 37.17%");
			printf("\n\n4. India reports single-day rise of 2,82,970 Covid cases; active cases in country highest in 232 days");
			printf("\n\n5. COVID-19: SC Pulls Up Andhra, Bihar Over Delay in Clearing Compensation Claims\n\n\n");
			break;
		case 5:
			printf("\n\t ==================");
			printf("\n\t | Education News |");
			printf("\n\t ==================");
			printf("\n\n1. University semester exams to be conducted in offline mode, says MP Higher Education minister");
			printf("\n\n2. Maharashtra School Reopening: Decision likely in Cabinet meeting on Thursday");
			printf("\n\n3. ICSI Result 2021 Declared! Check CS Foundation and CSEET ");
			printf("\n\n4. All Telangana govt schools to become English medium from next academic year");
			printf("\n\n5. ICSI Result 2021 Declared! Check CS Foundation and CSEET\n\n\n ");
			break;
		case 6:
			printf("\n\t ==================");
			printf("\n\t |   World News   |");
			printf("\n\t ==================");
			printf("\n\n1. Sheikh Jarrah: Israeli police evict Palestinians from East Jerusalem home");
			printf("\n\n2. Ukraine: Blinken in Kyiv urges Russia to take peaceful path");
			printf("\n\n3. Gaspard Ulliel: Moon Knight actor dies aged 37 after ski accident");
			printf("\n\n4. Joe Biden declared that his ascension was the triumph not of a candidate, but of a cause - the cause of democracy.");
			printf("\n\n5. The property is home to the only known ceiling mural by Italian baroque artist Michelangelo Merisi, better known as Caravaggio.\n\n\n");
			break;
	}
	}
	while(choose!=7);
	return 0;
}
