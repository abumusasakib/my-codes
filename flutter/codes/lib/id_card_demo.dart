import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';

void main() {
  runApp(const MaterialApp(
    home: IdCard(),
  ));
}

class IdCard extends StatelessWidget {
  const IdCard({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[900],
      appBar: AppBar(
        title: const Text(
          'My ID Card',
          style: TextStyle(
            color: Colors.blue,
            letterSpacing: 2.0,
            fontSize: 24.0,
          ),
        ),
        centerTitle: true,
        backgroundColor: Colors.grey[850],
        elevation: 0.0, // drop shadow remove
      ),
      body: Padding(
        padding: const EdgeInsets.fromLTRB(30.0, 40.0, 30.0, 0.0),
        child: Center(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              const Center(
                child: CircleAvatar(
                  backgroundImage: AssetImage('images/id_card_image.jpg'),
                  radius: 60.0,
                ),
              ),
              Divider(
                height: 90.0,
                color: Colors.blue[800],
              ),
              const Text('NAME',
                  style: TextStyle(
                    color: Colors.grey,
                    letterSpacing: 2.0,
                  )),
              const SizedBox(
                height: 10.0, // an empty space with height 10
              ),
              Text(
                'Abu Musa Sakib',
                style: TextStyle(
                  color: Colors.blue[200],
                  letterSpacing: 2.0,
                  fontSize: 28.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
              const SizedBox(
                height: 30.0,
              ),
              const Text(
                'AGE',
                style: TextStyle(
                  color: Colors.grey,
                  letterSpacing: 2.0,
                ),
              ),
              const SizedBox(
                height: 10.0,
              ),
              Text(
                '27',
                style: TextStyle(
                  color: Colors.blue[200],
                  letterSpacing: 2.0,
                  fontSize: 28.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
              const SizedBox(
                height: 30.0,
              ),
              GestureDetector(
                onTap: () => _launchEmail('sakib3963@gmail.com'),
                child: Row(
                  children: [
                    Icon(
                      Icons.email,
                      color: Colors.lightBlueAccent[400],
                    ),
                    const SizedBox(
                      width: 10.0,
                    ),
                    Text(
                      'sakib3963@gmail.com',
                      style: TextStyle(
                        color: Colors.blue[400],
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.blue[200],
                        fontSize: 18.0,
                        letterSpacing: 1.0,
                      ),
                    ),
                  ],
                ),
              ),
              const SizedBox(
                height: 20.0,
              ),
              GestureDetector(
                onTap: () => _launchPhone('+8801621554760'),
                child: Row(
                  children: [
                    Icon(
                      Icons.phone,
                      color: Colors.lightBlueAccent[400],
                    ),
                    const SizedBox(
                      width: 10.0,
                    ),
                    Text(
                      '+8801621554760',
                      style: TextStyle(
                        color: Colors.blue[400],
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.blue[200],
                        fontSize: 18.0,
                        letterSpacing: 1.0,
                      ),
                    ),
                  ],
                ),
              ),
              const SizedBox(
                height: 20.0,
              ),
              GestureDetector(
                onTap: () => _launchLocation('Dhaka, Bangladesh'),
                child: Row(
                  children: [
                    Icon(
                      Icons.home,
                      color: Colors.lightBlueAccent[400],
                    ),
                    const SizedBox(
                      width: 10.0,
                    ),
                    Text(
                      'Dhaka, Bangladesh',
                      style: TextStyle(
                        color: Colors.blue[400],
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.blue[200],
                        fontSize: 18.0,
                        letterSpacing: 1.0,
                      ),
                    ),
                  ],
                ),
              ),
              const SizedBox(
                height: 20.0,
              ),
              Image.asset(
                'images/frame.png',
                fit: BoxFit.contain,
                width: 100.0,
                height: 100.0,
              ),
            ],
          ),
        ),
      ),
    );
  }

  void _launchEmail(String email) async {
    final Uri emailLaunchUri = Uri(scheme: 'mailto', path: email);
    await launchUrl(emailLaunchUri);
  }

  void _launchPhone(String phone) async {
    final Uri phoneLaunchUri = Uri(scheme: 'tel', path: phone);
    await launchUrl(phoneLaunchUri);
  }

  void _launchLocation(String location) async {
    final Uri locationLaunchUri =
        Uri.https('www.google.com', '/maps', {'q': location});
    await launchUrl(locationLaunchUri);
  }
}
