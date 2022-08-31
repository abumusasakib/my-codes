<?php
$url = "http://api.openweathermap.org/data/2.5/forecast?q=Dhaka&appid=*your_openweathermap_api_key*&units=metric";
$contents = file_get_contents($url);
$weather = json_decode($contents);

$city_name = $weather->city->name . "<br>";
$latitude = $weather->city->coord->lat . "<br>";
$longitude = $weather->city->coord->lon . "<br>";
$sunrise = $weather->city->sunrise;
$sunset = $weather->city->sunset;

date_default_timezone_set("Asia/Dhaka");
$todayDate = date("Y-m-d");
$todayTime = date("H:i:s ", time());
list($todayhour, $todaymin, $todaysec) = explode(":", $todayTime);

class Weather
{
    public $time;
    public $weather_icon;
    public $temp;
    public $weather_condition;
    public $temp_max;
    public $temp_min;
    public $precipitation;
    public $feels_like;
    public $pressure;
    public $pressure_gnd_lvl;
    public $humidity;
    public $wind_speed;
    public $wind_degree;
    public $wind_gust;
    public $visibility;
}
function getWeatherData($date, $weather)
{
    $weatherArr = array();

    foreach ($weather->list as $forecast) {
        $date_time =  $forecast->dt_txt;
        $dtArr = explode(" ", $date_time);

        $weatherData = new Weather;
        $weatherData->time = $dtArr[1];
        $weatherData->weather_icon = $forecast->weather[0]->icon;
        $weatherData->temp = $forecast->main->temp;
        $weatherData->weather_condition = $forecast->weather[0]->main;
        $weatherData->temp_max = $forecast->main->temp_max;
        $weatherData->temp_min = $forecast->main->temp_min;
        $weatherData->precipitation = $forecast->pop;
        $weatherData->feels_like = $forecast->main->feels_like;
        $weatherData->pressure = $forecast->main->pressure;
        $weatherData->pressure_gnd_lvl = $forecast->main->grnd_level;
        $weatherData->humidity = $forecast->main->humidity;
        $weatherData->wind_speed = $forecast->wind->speed;
        $weatherData->wind_degree = $forecast->wind->deg;
        $weatherData->wind_gust = $forecast->wind->gust;
        $weatherData->visibility = $forecast->visibility;


        if ($dtArr[0] == $date) {
            array_push($weatherArr, $weatherData);
        }
    }
    return $weatherArr;
}

function getWeekday($date)
{
    return date('l', strtotime($date));
}

$todayWeatherArr = getWeatherData($todayDate, $weather);

foreach ($weather->list as $forecast) {
    $date_time =  $forecast->dt_txt;
    $dtArr = explode(" ", $date_time);
    list($dtArrhour, $dtArrmin, $dtArrsec) = explode(":", $dtArr[1]);


    list($todayhour, $todaymin, $todaysec) = explode(":", $todayTime);
    if (abs($todayhour - $dtArrhour) < 3) {
        $thisHourWeather = new Weather;
        $thisHourWeather->time = $dtArr[1];
        $thisHourWeather->weather_icon = $forecast->weather[0]->icon;
        $thisHourWeather->temp = $forecast->main->temp;
        $thisHourWeather->weather_condition = $forecast->weather[0]->main;
        $thisHourWeather->temp_max = $forecast->main->temp_max;
        $thisHourWeather->temp_min = $forecast->main->temp_min;
        $thisHourWeather->precipitation = $forecast->pop;
        $thisHourWeather->feels_like = $forecast->main->feels_like;
        $thisHourWeather->pressure = $forecast->main->pressure;
        $thisHourWeather->pressure_gnd_lvl = $forecast->main->grnd_level;
        $thisHourWeather->humidity = $forecast->main->humidity;
        $thisHourWeather->wind_speed = $forecast->wind->speed;
        $thisHourWeather->wind_degree = $forecast->wind->deg;
        $thisHourWeather->wind_gust = $forecast->wind->gust;
        $thisHourWeather->visibility = $forecast->visibility;
        break;
    }
}

?>
<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <script src="https://kit.fontawesome.com/3112d292f2.js" crossorigin="anonymous"></script>

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">


    <title>Weather</title>
    <style type="text/css">
        i.fas,
        i.fab {
            color: white;
        }

        body {
            background-image: url("img/Untitled-1.jpg");
            background-repeat: no-repeat;
            background-size: 100%;
        }
    </style>
</head>

<body>
    <div class="container" style="padding-left:15px;padding-top:10px">
        <div class="card mb-3 px-1" style="max-width: 440px;opacity:0.8;background-color:#4CBB17;color:white;padding-top:20px;" id="detailsCard">
            <div class="row g-0" style="opacity:0.8;">
                <?php
                if ($city_name != null) {
                    echo '<h5> <i class="fas fa-city"></i> ' . $city_name . "</h5>";
                } else {
                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                }

                ?>
                <div class="container" style="opacity:0.8;">
                    <div class="row">
                        <div class="col-md-6">
                            <?php
                            echo '<i class="fas fa-calendar-day"></i> ' . $todayDate . "<br>";
                            echo '<i class="fas fa-clock"></i> ' . date('g:i a', strtotime($todayTime));
                            ?>
                        </div>
                        <div class="col-md-6">
                            <?php
                            if ($latitude != null and $longitude != null) {
                                echo "Latitude: " . $latitude;
                                echo "Longitude: " . $longitude;
                            } else {
                                echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                            }

                            ?>
                        </div>
                    </div>
                </div>

            </div>
        </div>
    </div>

    <div class="col d-flex justify-content-center">
        <div class="container">
            <div class="row">
                <div class="col-md-6">
                    <div class="card mb-3 px-1" style="max-width: 540px;opacity:0.8;background-color:#4CBB17;color:white" id="detailsCard">
                        <div class="row g-0">
                            <div class="col-md-2">
                                <?php
                                if ($thisHourWeather != null) {
                                    $weather_icon = $thisHourWeather->weather_icon;
                                    $img_link = "http://openweathermap.org/img/wn/";
                                    $img_ext = "@2x.png";
                                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="img-fluid rounded-start" id="weatherImage"' . '>';
                                } else {
                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                }

                                ?>
                            </div>
                            <div class="col-md-6">
                                <div class="card-body" id="detailsCard">
                                    <h5 class="card-title" id="detailsCard">
                                        <?php
                                        if ($thisHourWeather != null) {
                                            $temp =  $thisHourWeather->temp;
                                            $weather_condition = $thisHourWeather->weather_condition;
                                            echo $temp . "°C<br>";
                                            echo $weather_condition . "<br>";
                                        } else {
                                            echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                        }

                                        ?>
                                    </h5>
                                    <p class="card-text" id="detailsCard">
                                        <?php
                                        if ($thisHourWeather != null) {
                                            $temp_max =  $thisHourWeather->temp_max;
                                            $temp_min =  $thisHourWeather->temp_min;
                                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>" . '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C ";
                                        } else {
                                            echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                        }

                                        ?>
                                    </p>
                                    <p class="card-text" style="color:white;" id="detailsCard">
                                        <?php
                                        if ($thisHourWeather != null) {
                                            $time = $thisHourWeather->time;
                                            echo "Weather data during: " . date('g a', strtotime($time));
                                        } else {
                                            echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                        }

                                        ?>
                                    </p>
                                </div>
                            </div>
                            <div class="col-md-4">
                                <div class="card-body" id="detailsCard">
                                    <p class="card-text" id="detailsCard">
                                        <?php
                                        $precipitation = $thisHourWeather->precipitation;
                                        $feels_like =  $thisHourWeather->feels_like;
                                        ?>
                                    <div class="container" style="opacity:0.8;">
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-tint"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($thisHourWeather != null) {
                                                    echo $thisHourWeather->humidity . "%<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-umbrella"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($precipitation >= 0 and $precipitation <= 1) {
                                                    echo ($precipitation / 1) * 100 . "%<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-user"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($feels_like != null) {
                                                    echo $feels_like . "°C<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                    </div>
                                    </p>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-6">
                    <div class="card mb-3 px-1" style="max-width: 540px;opacity:0.8;background-color:#4CBB17;color:white">
                        <div class="row g-0" style="opacity:0.8;">
                            <div class="col-md-6">
                                <div class="card-body" id="detailsCard">
                                    <h5 class="card-title" id="detailsCard">
                                        <?php
                                        echo "Details <br>";
                                        ?>
                                    </h5>
                                    <p class="card-text">
                                    <div class="container" style="opacity:0.8;">
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-feather"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($thisHourWeather != null) {
                                                    echo $thisHourWeather->wind_degree . "°<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-wind"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($thisHourWeather != null) {
                                                    echo $thisHourWeather->wind_speed . " m/s<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-compress-arrows-alt"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($thisHourWeather != null) {
                                                    echo $thisHourWeather->pressure . " hPa<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                    </div>
                                    </p>
                                </div>
                            </div>
                            <div class="col-md-6">
                                <div class="card-body" id="detailsCard">
                                    <h5 class="card-title" id="detailsCard">
                                        <?php
                                        echo "More details <br>";
                                        ?>
                                    </h5>
                                    <p class="card-text">
                                    <div class="container" style="opacity:0.8;">
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-sun"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($sunrise != null and $sunset != null) {
                                                    echo date("g:i a", $sunrise) . "<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-cloud-sun"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($sunrise != null and $sunset != null) {
                                                    echo date("g:i a", $sunset) . "<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                        <div class="row">
                                            <div class="col-md-2">
                                                <i class="fas fa-smog"></i>
                                            </div>
                                            <div class="col-md-6">
                                                <?php
                                                if ($thisHourWeather != null) {
                                                    echo $thisHourWeather->visibility . " m<br>";
                                                } else {
                                                    echo '<script> var forecastCard = document.getElementById("detailsCard");forecastCard.style = "opacity:0";</script>';
                                                }
                                                ?>
                                            </div>
                                        </div>
                                    </div>
                                    </p>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="row g-0" style="padding-left:110px;padding-bottom:10px">
        <h5 class="card-title" style="color:white"> 3 Hour Forecast</h5>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard1">
                <?php
                $arrIndex = 0;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard1">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard1">
                        <?php
                        $arrIndex = 0;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard1");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard1">
                        <?php
                        $arrIndex = 0;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard1");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard2">
                <?php
                $arrIndex = 1;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard2");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard2">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard2">
                        <?php
                        $arrIndex = 1;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard2");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard2">
                        <?php
                        $arrIndex = 1;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard2");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard3">
                <?php
                $arrIndex = 2;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard3");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard3">
                        <?php
                        $arrIndex = 2;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard3");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard3">
                        <?php
                        $arrIndex = 2;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard3");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard4">
                <?php
                $arrIndex = 3;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard4">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard4">
                        <?php
                        $arrIndex = 3;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard4");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard4">
                        <?php
                        $arrIndex = 3;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard4");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>

        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard5">
                <?php
                $arrIndex = 4;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard5");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard5">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard5">
                        <?php
                        $arrIndex = 4;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard5");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard5">
                        <?php
                        $arrIndex = 4;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard5");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard6">
                <?php
                $arrIndex = 5;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard6");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard6">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard6">
                        <?php
                        $arrIndex = 5;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard6");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard6">
                        <?php
                        $arrIndex = 5;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard6");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-right:20px;" id="hourForecastCard7">
                <?php
                $arrIndex = 6;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard7");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard7">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard7">
                        <?php
                        $arrIndex = 6;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard7");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard7">
                        <?php
                        $arrIndex = 6;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard7");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
        <div class="col-md-1">
            <div class="card" style="max-width: 140px;opacity:0.8;background-color:#4CBB17;color:white;margin-left:20px;" id="hourForecastCard8">
                <?php
                $arrIndex = 7;
                if ($arrIndex < count($todayWeatherArr)) {
                    $weather_icon = $todayWeatherArr[$arrIndex]->weather_icon;
                    $img_link = "http://openweathermap.org/img/wn/";
                    $img_ext = "@2x.png";
                    echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-top"' . '>';
                } else {
                    echo '<script> var forecastCard = document.getElementById("hourForecastCard8");forecastCard.style = "opacity:0";</script>';
                }

                ?>

                <div class="card-body" id="hourForecastCard8">
                    <h5 class="card-title" style="font-size: 20px;" id="hourForecastCard8">
                        <?php
                        $arrIndex = 7;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $time = $todayWeatherArr[$arrIndex]->time;
                            echo date('g a', strtotime($time));
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard8");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" style="font-size: 17px;" id="hourForecastCard8">
                        <?php
                        $arrIndex = 7;
                        if ($arrIndex < count($todayWeatherArr)) {
                            $weather_condition = $todayWeatherArr[$arrIndex]->weather_condition;
                            $temp =  $todayWeatherArr[$arrIndex]->temp;
                            echo $weather_condition . "<br>";
                            echo $temp . "°C<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("hourForecastCard8");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>

                </div>
            </div>
        </div>
    </div>

    <div class="row" style="padding-bottom:20px;padding-left:110px;">
        <h5 class="card-title" style="color:white;">5 Day Forecast</h5>
        <div class="col-sm-2">
            <div class="card" style="opacity:0.8;background-color:#4CBB17;color:white" id="dayForecastCard1">

                <div class="card-body" id="dayForecastCard1">
                    <h5 class="card-title" id="dayForecastCard1">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P1D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $nextWeatherData = getWeatherData($nextDate, $weather);
                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            echo date('M j', strtotime($nextDate)) . "<br>";
                            echo getWeekday($nextDate) . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard1");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" id="dayForecastCard1">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P1D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            $temp_max =  $nextWeatherData[$arrIndex]->temp_max;
                            $temp_min =  $nextWeatherData[$arrIndex]->temp_min;
                            $weather_condition = $nextWeatherData[$arrIndex]->weather_condition;
                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>";
                            echo '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C<br>";
                            echo $weather_condition . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard1");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>
                    <?php
                    $todayDateObj = new DateTime($todayDate);
                    $nextDateObj = $todayDateObj->add(new DateInterval("P1D"));
                    $nextDate = $nextDateObj->format('Y-m-d');

                    $nextWeatherData = getWeatherData($nextDate, $weather);
                    $arrIndex = 0;
                    if ($arrIndex < count($nextWeatherData)) {
                        $weather_icon = $nextWeatherData[$arrIndex]->weather_icon;
                        $img_link = "http://openweathermap.org/img/wn/";
                        $img_ext = "@2x.png";
                        echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-bottom"' . '>';
                    } else {
                        echo '<script> var forecastCard = document.getElementById("dayForecastCard1");forecastCard.style = "opacity:0";</script>';
                    }

                    ?>
                </div>
            </div>
        </div>
        <div class="col-sm-2">
            <div class="card" style="opacity:0.8;background-color:#4CBB17;color:white" id="dayForecastCard2">

                <div class="card-body" id="dayForecastCard2">
                    <h5 class="card-title" id="dayForecastCard2">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P2D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $nextWeatherData = getWeatherData($nextDate, $weather);
                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            echo date('M j', strtotime($nextDate)) . "<br>";
                            echo getWeekday($nextDate) . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard2");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" id="dayForecastCard2">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P2D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            $temp_max =  $nextWeatherData[$arrIndex]->temp_max;
                            $temp_min =  $nextWeatherData[$arrIndex]->temp_min;
                            $weather_condition = $nextWeatherData[$arrIndex]->weather_condition;
                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>";
                            echo '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C<br>";
                            echo $weather_condition . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard2");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>
                    <?php
                    $todayDateObj = new DateTime($todayDate);
                    $nextDateObj = $todayDateObj->add(new DateInterval("P2D"));
                    $nextDate = $nextDateObj->format('Y-m-d');

                    $nextWeatherData = getWeatherData($nextDate, $weather);
                    $arrIndex = 0;
                    if ($arrIndex < count($nextWeatherData)) {
                        $weather_icon = $nextWeatherData[$arrIndex]->weather_icon;
                        $img_link = "http://openweathermap.org/img/wn/";
                        $img_ext = "@2x.png";
                        echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-bottom"' . '>';
                    } else {
                        echo '<script> var forecastCard = document.getElementById("dayForecastCard2");forecastCard.style = "opacity:0";</script>';
                    }

                    ?>
                </div>
            </div>
        </div>
        <div class="col-sm-2">
            <div class="card" style="opacity:0.8;background-color:#4CBB17;color:white" id="dayForecastCard3">

                <div class="card-body" id="dayForecastCard3">
                    <h5 class="card-title" id="dayForecastCard3">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P3D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $nextWeatherData = getWeatherData($nextDate, $weather);
                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            echo date('M j', strtotime($nextDate)) . "<br>";
                            echo getWeekday($nextDate) . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard3");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" id="dayForecastCard3">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P3D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            $temp_max =  $nextWeatherData[$arrIndex]->temp_max;
                            $temp_min =  $nextWeatherData[$arrIndex]->temp_min;
                            $weather_condition = $nextWeatherData[$arrIndex]->weather_condition;
                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>";
                            echo '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C<br>";
                            echo $weather_condition . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard3");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>
                    <?php
                    $todayDateObj = new DateTime($todayDate);
                    $nextDateObj = $todayDateObj->add(new DateInterval("P3D"));
                    $nextDate = $nextDateObj->format('Y-m-d');

                    $nextWeatherData = getWeatherData($nextDate, $weather);
                    $arrIndex = 0;
                    if ($arrIndex < count($nextWeatherData)) {
                        $weather_icon = $nextWeatherData[$arrIndex]->weather_icon;
                        $img_link = "http://openweathermap.org/img/wn/";
                        $img_ext = "@2x.png";
                        echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-bottom"' . '>';
                    } else {
                        echo '<script> var forecastCard = document.getElementById("dayForecastCard3");forecastCard.style = "opacity:0";</script>';
                    }

                    ?>
                </div>
            </div>
        </div>

        <div class="col-sm-2">
            <div class="card" style="opacity:0.8;background-color:#4CBB17;color:white" id="dayForecastCard4">

                <div class="card-body" id="dayForecastCard4">
                    <h5 class="card-title" id="dayForecastCard4">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P4D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $nextWeatherData = getWeatherData($nextDate, $weather);
                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            echo date('M j', strtotime($nextDate)) . "<br>";
                            echo getWeekday($nextDate) . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard4");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" id="dayForecastCard4">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P4D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            $temp_max =  $nextWeatherData[$arrIndex]->temp_max;
                            $temp_min =  $nextWeatherData[$arrIndex]->temp_min;
                            $weather_condition = $nextWeatherData[$arrIndex]->weather_condition;
                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>";
                            echo '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C<br>";
                            echo $weather_condition . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard4");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>
                    <?php
                    $todayDateObj = new DateTime($todayDate);
                    $nextDateObj = $todayDateObj->add(new DateInterval("P4D"));
                    $nextDate = $nextDateObj->format('Y-m-d');

                    $nextWeatherData = getWeatherData($nextDate, $weather);
                    $arrIndex = 0;
                    if ($arrIndex < count($nextWeatherData)) {
                        $weather_icon = $nextWeatherData[$arrIndex]->weather_icon;
                        $img_link = "http://openweathermap.org/img/wn/";
                        $img_ext = "@2x.png";
                        echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-bottom"' . '>';
                    } else {
                        echo '<script> var forecastCard = document.getElementById("dayForecastCard4");forecastCard.style = "opacity:0";</script>';
                    }

                    ?>
                </div>
            </div>
        </div>
        <div class="col-sm-2">
            <div class="card" style="opacity:0.8;background-color:#4CBB17;color:white" id="dayForecastCard5">

                <div class="card-body" id="dayForecastCard5">
                    <h5 class="card-title" id="dayForecastCard5">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P5D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $nextWeatherData = getWeatherData($nextDate, $weather);
                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            echo date('M j', strtotime($nextDate)) . "<br>";
                            echo getWeekday($nextDate) . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard5");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </h5>
                    <p class="card-text" id="dayForecastCard5">
                        <?php
                        $todayDateObj = new DateTime($todayDate);
                        $nextDateObj = $todayDateObj->add(new DateInterval("P5D"));
                        $nextDate = $nextDateObj->format('Y-m-d');

                        $arrIndex = 0;
                        if ($arrIndex < count($nextWeatherData)) {
                            $temp_max =  $nextWeatherData[$arrIndex]->temp_max;
                            $temp_min =  $nextWeatherData[$arrIndex]->temp_min;
                            $weather_condition = $nextWeatherData[$arrIndex]->weather_condition;
                            echo '<i class="fas fa-temperature-high"></i> ' . $temp_max . "°C<br>";
                            echo '<i class="fas fa-temperature-low"></i> ' . $temp_min . "°C<br>";
                            echo $weather_condition . "<br>";
                        } else {
                            echo '<script> var forecastCard = document.getElementById("dayForecastCard5");forecastCard.style = "opacity:0";</script>';
                        }

                        ?>
                    </p>
                    <?php
                    $todayDateObj = new DateTime($todayDate);
                    $nextDateObj = $todayDateObj->add(new DateInterval("P5D"));
                    $nextDate = $nextDateObj->format('Y-m-d');

                    $nextWeatherData = getWeatherData($nextDate, $weather);
                    $arrIndex = 0;
                    if ($arrIndex < count($nextWeatherData)) {
                        $weather_icon = $nextWeatherData[$arrIndex]->weather_icon;
                        $img_link = "http://openweathermap.org/img/wn/";
                        $img_ext = "@2x.png";
                        echo '<img src = "' . $img_link . $weather_icon . $img_ext . '"' . ' class="card-img-bottom"' . '>';
                    } else {
                        echo '<script> var forecastCard = document.getElementById("dayForecastCard5");forecastCard.style = "opacity:0";</script>';
                    }

                    ?>
                </div>
            </div>
        </div>
    </div>


    <!-- Optional JavaScript; choose one of the two! -->

    <!-- Option 1: Bootstrap Bundle with Popper -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>

    <!-- Option 2: Separate Popper and Bootstrap JS -->
    <!--
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js" integrity="sha384-IQsoLXl5PILFhosVNubq5LC7Qb9DXgDA9i+tQ8Zj3iwWAwPtgFTxbJ8NT4GN1R8p" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.min.js" integrity="sha384-cVKIPhGWiC2Al4u+LWgxfKTRIcfu0JTxR+EQDz/bgldoEyl4H0zUF0QKbrJ0EcQF" crossorigin="anonymous"></script>
    -->

</body>

</html>