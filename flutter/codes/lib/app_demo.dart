import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.green,
          title: const Text('Flutter is Fun!'),
		  centerTitle: true,
        ),
        body: Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          crossAxisAlignment: CrossAxisAlignment.end,
          children: [
            Stack(
              children: [
                Align(
                  alignment: Alignment.center,
                  child: Container(
                    decoration: const BoxDecoration(
                      color: Color(0xFFFCBA03),
                      shape: BoxShape.circle,
                    ),
                    width: 100,
                    height: 100,
                  ),
                ),
                const Positioned(
                  top: 25,
                  left: 25,
                  child: Icon(Icons.verified),
                ),
              ],
            ),
            const Expanded(
              flex: 4,
              child: Icon(Icons.backpack),
            ),
            const Icon(Icons.leaderboard),
            const Icon(Icons.person),
            Center(
              child: Container(
                margin: const EdgeInsets.all(100),
                padding: const EdgeInsets.all(10),
                color: Colors.red,
                height: 60,
                width: 60,
                child: const Text('Hi Mom 🐣'),
              ),
            ),
          ],
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            print('printing pressed....');
          },
          child: const Icon(Icons.add),
        ),
        bottomNavigationBar: BottomNavigationBar(
          items: const [
            BottomNavigationBarItem(
              icon: Icon(Icons.home),
              label: 'Home',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.business),
              label: 'Business',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.school),
              label: 'School',
            ),
          ],
        ),
        drawer: Drawer(
            child: ListView(
              scrollDirection: Axis.vertical,
              addAutomaticKeepAlives: false,
          children: [
            ListTile(
              leading: const Icon(Icons.person),
              title: const Text('My Profile'),
              onTap: () {
                Navigator.pop(context);
              },
            ),
            ListTile(
              leading: const Icon(Icons.book),
              title: const Text('My Course'),
              onTap: () {
                Navigator.pop(context);
              },
            ),
          ],
        )),
      ),
    );
  }
}
