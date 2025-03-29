#include <iostream>
  #include <fstream>
  
  using namespace std;
  
  class MentalHealthSurvey {
  public:
      void conductSurvey() {
          ofstream file("survey_results.txt", ios::app);
          if (!file) {
              cerr << "Error opening file!" << endl;
              return;
          }
  
          cout << "Mental Health Survey\n";
          file << "Mental Health Survey\n";
          cout << "\n#General Mood" << endl;
          file << "\n#General Mood" << endl;
          askGeneralMoodQuestions(file);
          cout << "\n#Stress and Anxiety " << endl;
          file << "\n#Stress and Anxiety " << endl;
          askStressAndAnxietyQuestions(file);
          cout << "\n# Sleep and Rest" << endl;
          file << "\n# Sleep and Rest" << endl;
          askSleepAndRestQuestions(file);
          cout << "\n#Physical Activity and Self-Care " << endl;
          file << "\n#Physical Activity and Self-Care " << endl;
          askPhysicalActivityQuestions(file);
  
          file.close();
      }
  
  private:
      void askGeneralMoodQuestions(ofstream &file) {
          int mood, stress, sadness, satisfaction, motivation;
  
          cout << "How would you rate your overall mood this month? (1 = Very Low, 5 = Very High): ";
          cin >> mood;
          cout << "How often did you feel overwhelmed or stressed this month? (1 = Never, 5 = Always): ";
          cin >> stress;
          cout << "How frequently did you experience feelings of sadness or depression? (1 = Never, 5 = Very Frequently): ";
          cin >> sadness;
          cout << "How satisfied are you with your overall mental health? (1 = Very Dissatisfied, 5 = Very Satisfied): ";
          cin >> satisfaction;
          cout << "How motivated did you feel throughout the month? (1 = Not Motivated at All, 5 = Very Motivated): ";
          cin >> motivation;
  
          file << "Mood: " << mood << ", Stress: " << stress << ", Sadness: " << sadness << ", Satisfaction: " << satisfaction << ", Motivation: " << motivation << endl;
  
          cout << "\n-Solution:-\n";
          if (mood <= 2 || sadness >= 4) {
              cout << "It looks like you might be struggling with your mood. Consider talking to a trusted friend or seeking professional support.\n";
          }
          if (stress >= 4) {
              cout << "High stress levels can affect mental health. Try relaxation techniques like deep breathing or meditation.\n";
          }
      }
  
      void askStressAndAnxietyQuestions(ofstream &file) {
          int stress, anxiety, management;
  
          cout << "On a scale of 1 to 5, how stressed did you feel in general this month?: ";
          cin >> stress;
          cout << "How often did you experience anxiety this month? (1 = Never, 5 = Very Frequently): ";
          cin >> anxiety;
          cout << "How well did you manage stress or anxiety? (1 = Not Well, 5 = Very Well): ";
          cin >> management;
  
          file << "Stress: " << stress << ", Anxiety: " << anxiety << ", Management: " << management << endl;
  
          cout << "\n-Solution:-\n";
          if (stress >= 4 || anxiety >= 4) {
              cout << "Your stress and anxiety levels seem high. Consider setting aside time for self-care or consulting a therapist.\n";
          }
          if (management <= 2) {
              cout << "If stress management is challenging, try journaling, exercise, or guided meditation.\n";
          }
      }
  
      void askSleepAndRestQuestions(ofstream &file) {
          int sleepQuality, troubleSleeping, sleepHours;
  
          cout << "How would you rate the quality of your sleep this month? (1 = Very Poor, 5 = Excellent): ";
          cin >> sleepQuality;
          cout << "Did you have trouble falling asleep or staying asleep? (1 = Never, 5 = Very Frequently): ";
          cin >> troubleSleeping;
          cout << "How many hours of sleep did you get on average each night?: ";
          cin >> sleepHours;
  
          file << "Sleep Quality: " << sleepQuality << ", Trouble Sleeping: " << troubleSleeping << ", Sleep Hours: " << sleepHours << endl;
  
          cout << "\n-Solution:-\n";
          if (sleepQuality <= 2 || troubleSleeping >= 4 || sleepHours < 6) {
              cout << "Improving sleep can boost mental health. Try creating a bedtime routine and avoiding screens before sleep.\n";
          }
      }
  
      void askPhysicalActivityQuestions(ofstream &file) {
          int exercise, eatingHabits, selfCare;
  
          cout << "How often did you engage in physical activity? (1 = Never, 5 = Very Frequently): ";
          cin >> exercise;
          cout << "How would you rate your eating habits? (1 = Very Poor, 5 = Very Good): ";
          cin >> eatingHabits;
          cout << "How often did you practice self-care (meditation, hobbies, etc.)? (1 = Never, 5 = Very Frequently): ";
          cin >> selfCare;

          file << "Exercise: " << exercise << ", Eating Habits: " << eatingHabits << ", Self-Care: " << selfCare << endl;
  
          cout << "\n-Solution:-\n";
          if (exercise <= 2) {
              cout << "Regular physical activity can improve mental health. Even a short daily walk can help.\n";
          }
          if (eatingHabits <= 2) {
              cout << "Healthy eating supports well-being. Try adding more fruits and vegetables to your meals.\n";
          }
      }
  };
  
  int main() {
      MentalHealthSurvey survey;
      survey.conductSurvey();
    return 0;
  }

