import 'package:flutter/foundation.dart';
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
        ),
        body: ListView(
          scrollDirection: Axis.vertical,
          addAutomaticKeepAlives: false,
          children: [
            Container(
              color: Colors.brown,
              height: MediaQuery.of(context).size.height,
            ),
            Container(
              color: Colors.limeAccent,
              height: MediaQuery.of(context).size.height,
            ),
            Container(
              color: Colors.blue,
              height: MediaQuery.of(context).size.height,
            ),
          ],
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            if (kDebugMode) {
              print('printing pressed....');
            }
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
