
  
  

  


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>src/iptc.cc at 822a8181d24165ad0c110b5d466065a80fcc7a0d from ollix's qmeta - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="http://github.com/fluidicon.png" title="GitHub" />

    <link href="http://assets3.github.com/stylesheets/bundle_common.css?943fe5b66ca533004a921a83178f661ea31c13c0" media="screen" rel="stylesheet" type="text/css" />
<link href="http://assets3.github.com/stylesheets/bundle_github.css?943fe5b66ca533004a921a83178f661ea31c13c0" media="screen" rel="stylesheet" type="text/css" />

    <script type="text/javascript" charset="utf-8">
      var GitHub = {}
      var github_user = null
      
    </script>
    <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js" type="text/javascript"></script>
    <script src="http://assets1.github.com/javascripts/bundle_common.js?943fe5b66ca533004a921a83178f661ea31c13c0" type="text/javascript"></script>
<script src="http://assets2.github.com/javascripts/bundle_github.js?943fe5b66ca533004a921a83178f661ea31c13c0" type="text/javascript"></script>

        <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "ollix/qmeta"
      })
    </script>

    
  
    
  

  <link href="http://github.com/ollix/qmeta/commits/822a8181d24165ad0c110b5d466065a80fcc7a0d.atom" rel="alternate" title="Recent Commits to qmeta:822a8181d24165ad0c110b5d466065a80fcc7a0d" type="application/atom+xml" />

    <META NAME="ROBOTS" CONTENT="NOINDEX, FOLLOW">    <meta name="description" content="A library to manipulate image metadata based on Qt." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "ollix/qmeta";
      GitHub.currentRef = "";
    </script>
  

            <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_trackPageview']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

  </head>

  

  <body>
    

    
      <script type="text/javascript">
        var _kmq = _kmq || [];
        (function(){function _kms(u,d){if(navigator.appName.indexOf("Microsoft")==0 && d)document.write("<scr"+"ipt defer='defer' async='true' src='"+u+"'></scr"+"ipt>");else{var s=document.createElement('script');s.type='text/javascript';s.async=true;s.src=u;(document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(s);}}_kms('https://i.kissmetrics.com/i.js');_kms('http'+('https:'==document.location.protocol ? 's://s3.amazonaws.com/' : '://')+'scripts.kissmetrics.com/406e8bf3a2b8846ead55afb3cfaf6664523e3a54.1.js',1);})();
      </script>
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="pageheaded">
        <div class="site">
          <div class="logo">
            <a href="http://github.com"><img src="/images/modules/header/logov3.png" alt="github" /></a>
          </div>
          
          <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <input type="search" class="search my_repos_autocompleter" name="q" results="5" placeholder="Search&hellip;" /> <input type="submit" value="Search" class="button" />
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
  
  
    <ul class="nav logged_out">
      
        <li><a href="http://github.com">Home</a></li>
        <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
        <li><a href="http://github.com/explore">Explore GitHub</a></li>
        
        <li><a href="/blog">Blog</a></li>
      
      <li><a href="https://github.com/login">Login</a></li>
    </ul>
  
</div>

        </div>
      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public   ">
        <h1>
          <a href="/ollix">ollix</a> / <strong><a href="http://github.com/ollix/qmeta">qmeta</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="https://github.com/ollix/qmeta/edit" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/ollix/qmeta/toggle_watch" class="minibutton btn-watch " id="watch_button" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/ollix/qmeta/toggle_watch" class="minibutton btn-watch " id="unwatch_button" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/ollix/qmeta/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'e462204c4567a596cfe84faade56d376be913e51'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
          <li id="pull_request_item" class='ospr' style="display:none"><a href="/ollix/qmeta/pull_request/" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
          

          <li><a href="#" class="minibutton btn-download " id="download_button"><span><span class="icon"></span>Download Source</span></a></li>
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/ollix/qmeta/watchers" title="Watchers" class="tooltipped downwards">2</a></li>
          <li class="forks"><a href="/ollix/qmeta/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>


        
  <ul class="tabs">
    <li><a href="http://github.com/ollix/qmeta/tree/" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="http://github.com/ollix/qmeta/commits/" highlight="repo_commits">Commits</a></li>

    
    <li><a href="/ollix/qmeta/network" highlight="repo_network">Network (1)</a></li>

    

    
      
      <li><a href="/ollix/qmeta/issues" highlight="issues">Issues (0)</a></li>
    

    
      
      <li><a href="/ollix/qmeta/downloads">Downloads (0)</a></li>
    

    
      
      <li><a href="http://wiki.github.com/ollix/qmeta/">Wiki (1)</a></li>
    

    <li><a href="/ollix/qmeta/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards tooltipped" title="822a8181d24165ad0c110b5d466065a80fcc7a0d">
        <em>Tree:</em>
        <code>822a818</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="#" class="dropdown">Switch Branches (1)</a>
      <ul>
        
          
          
            <li><a href="/ollix/qmeta/blob/master/src/iptc.cc" action="show">master</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/ollix/qmeta/branches/master" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  


        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <div class="pledgie">
          <a href='http://pledgie.com/campaigns/8475'><img alt='Click here to lend your support to: qmeta and make a donation at www.pledgie.com !' src='http://www.pledgie.com/campaigns/8475.png?skin_name=chrome' border='0' /></a>
        </div>
      

      <div id="repository_description" rel="repository_description_edit">
        
          <p>A library to manipulate image metadata based on Qt.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>
      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/ollix/qmeta/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="e462204c4567a596cfe84faade56d376be913e51" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="A library to manipulate image metadata based on Qt.">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://" rel="nofollow"></a></p>
      </div>
      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/ollix/qmeta/edit/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="e462204c4567a596cfe84faade56d376be913e51" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      <div class="rule "></div>

      <div id="url_box" class="url-box">
        <ul class="clone-urls">
          
            
            <li id="http_clone_url"><a href="http://github.com/ollix/qmeta.git" data-permissions="Read-Only">HTTP</a></li>
            <li id="public_clone_url"><a href="git://github.com/ollix/qmeta.git" data-permissions="Read-Only">Git Read-Only</a></li>
          
        </ul>
        <input type="text" spellcheck="false" id="url_field" class="url-field" />
              <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets1.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets1.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

        <p id="url_description">This URL has <strong>Read+Write</strong> access</p>
      </div>
    </div>


        

      </div><!-- /.pagehead -->

      









<script type="text/javascript">
  GitHub.currentCommitRef = "822a8181d24165ad0c110b5d466065a80fcc7a0d"
  GitHub.currentRepoOwner = "ollix"
  GitHub.currentRepo = "qmeta"
  GitHub.downloadRepo = '/ollix/qmeta/archives/822a8181d24165ad0c110b5d466065a80fcc7a0d'

  

  
</script>










  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/ollix/qmeta/commit/822a8181d24165ad0c110b5d466065a80fcc7a0d">Drops QtGui support in CMakeLists.txt.</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="http://www.gravatar.com/avatar/a8be03049f6c5fe81fd2e33a697c43ec?s=140&d=http%3A%2F%2Fgithub.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/olliwang">olliwang</a> <span>(author)</span></div>
        <div class="date">
          <abbr class="relatize" title="2010-04-03 00:18:45">Sat Apr 03 00:18:45 -0700 2010</abbr>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/ollix/qmeta/commit/822a8181d24165ad0c110b5d466065a80fcc7a0d" hotkey="c">822a8181d24165ad0c11</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d" hotkey="t">b78f43e019ed48713341</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/ollix/qmeta/tree/cf7e42e9d1808fad9971f1b010adf926ac5b525d" hotkey="p">cf7e42e9d1808fad9971</a>
      

    </div>
  </div>

    </div>
  </div>



  
    <div id="path">
      <b><a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d">qmeta</a></b> / <a href="/ollix/qmeta/tree/822a8181d24165ad0c110b5d466065a80fcc7a0d/src">src</a> / iptc.cc       <span style="display:none" id="clippy_2409">src/iptc.cc</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="http://assets1.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_2409&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="http://assets1.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_2409&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div id="files">
      <div class="file">
        <div class="meta">
          <div class="info">
            <span class="icon"><img alt="Txt" height="16" src="http://assets2.github.com/images/icons/txt.png?943fe5b66ca533004a921a83178f661ea31c13c0" width="16" /></span>
            <span class="mode" title="File Mode">100644</span>
            
              <span>190 lines (174 sloc)</span>
            
            <span>7.508 kb</span>
          </div>
          <ul class="actions">
            
              <li><a id="file-edit-link" href="#" rel="/ollix/qmeta/file-edit/__ref__/src/iptc.cc">edit</a></li>
            
            <li><a href="/ollix/qmeta/raw/822a8181d24165ad0c110b5d466065a80fcc7a0d/src/iptc.cc" id="raw-url">raw</a></li>
            
              <li><a href="/ollix/qmeta/blame/822a8181d24165ad0c110b5d466065a80fcc7a0d/src/iptc.cc">blame</a></li>
            
            <li><a href="/ollix/qmeta/commits/master/src/iptc.cc">history</a></li>
          </ul>
        </div>
        
  <div class="data syntax type-cpp">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="LID1" rel="#L1">1</span>
<span id="LID2" rel="#L2">2</span>
<span id="LID3" rel="#L3">3</span>
<span id="LID4" rel="#L4">4</span>
<span id="LID5" rel="#L5">5</span>
<span id="LID6" rel="#L6">6</span>
<span id="LID7" rel="#L7">7</span>
<span id="LID8" rel="#L8">8</span>
<span id="LID9" rel="#L9">9</span>
<span id="LID10" rel="#L10">10</span>
<span id="LID11" rel="#L11">11</span>
<span id="LID12" rel="#L12">12</span>
<span id="LID13" rel="#L13">13</span>
<span id="LID14" rel="#L14">14</span>
<span id="LID15" rel="#L15">15</span>
<span id="LID16" rel="#L16">16</span>
<span id="LID17" rel="#L17">17</span>
<span id="LID18" rel="#L18">18</span>
<span id="LID19" rel="#L19">19</span>
<span id="LID20" rel="#L20">20</span>
<span id="LID21" rel="#L21">21</span>
<span id="LID22" rel="#L22">22</span>
<span id="LID23" rel="#L23">23</span>
<span id="LID24" rel="#L24">24</span>
<span id="LID25" rel="#L25">25</span>
<span id="LID26" rel="#L26">26</span>
<span id="LID27" rel="#L27">27</span>
<span id="LID28" rel="#L28">28</span>
<span id="LID29" rel="#L29">29</span>
<span id="LID30" rel="#L30">30</span>
<span id="LID31" rel="#L31">31</span>
<span id="LID32" rel="#L32">32</span>
<span id="LID33" rel="#L33">33</span>
<span id="LID34" rel="#L34">34</span>
<span id="LID35" rel="#L35">35</span>
<span id="LID36" rel="#L36">36</span>
<span id="LID37" rel="#L37">37</span>
<span id="LID38" rel="#L38">38</span>
<span id="LID39" rel="#L39">39</span>
<span id="LID40" rel="#L40">40</span>
<span id="LID41" rel="#L41">41</span>
<span id="LID42" rel="#L42">42</span>
<span id="LID43" rel="#L43">43</span>
<span id="LID44" rel="#L44">44</span>
<span id="LID45" rel="#L45">45</span>
<span id="LID46" rel="#L46">46</span>
<span id="LID47" rel="#L47">47</span>
<span id="LID48" rel="#L48">48</span>
<span id="LID49" rel="#L49">49</span>
<span id="LID50" rel="#L50">50</span>
<span id="LID51" rel="#L51">51</span>
<span id="LID52" rel="#L52">52</span>
<span id="LID53" rel="#L53">53</span>
<span id="LID54" rel="#L54">54</span>
<span id="LID55" rel="#L55">55</span>
<span id="LID56" rel="#L56">56</span>
<span id="LID57" rel="#L57">57</span>
<span id="LID58" rel="#L58">58</span>
<span id="LID59" rel="#L59">59</span>
<span id="LID60" rel="#L60">60</span>
<span id="LID61" rel="#L61">61</span>
<span id="LID62" rel="#L62">62</span>
<span id="LID63" rel="#L63">63</span>
<span id="LID64" rel="#L64">64</span>
<span id="LID65" rel="#L65">65</span>
<span id="LID66" rel="#L66">66</span>
<span id="LID67" rel="#L67">67</span>
<span id="LID68" rel="#L68">68</span>
<span id="LID69" rel="#L69">69</span>
<span id="LID70" rel="#L70">70</span>
<span id="LID71" rel="#L71">71</span>
<span id="LID72" rel="#L72">72</span>
<span id="LID73" rel="#L73">73</span>
<span id="LID74" rel="#L74">74</span>
<span id="LID75" rel="#L75">75</span>
<span id="LID76" rel="#L76">76</span>
<span id="LID77" rel="#L77">77</span>
<span id="LID78" rel="#L78">78</span>
<span id="LID79" rel="#L79">79</span>
<span id="LID80" rel="#L80">80</span>
<span id="LID81" rel="#L81">81</span>
<span id="LID82" rel="#L82">82</span>
<span id="LID83" rel="#L83">83</span>
<span id="LID84" rel="#L84">84</span>
<span id="LID85" rel="#L85">85</span>
<span id="LID86" rel="#L86">86</span>
<span id="LID87" rel="#L87">87</span>
<span id="LID88" rel="#L88">88</span>
<span id="LID89" rel="#L89">89</span>
<span id="LID90" rel="#L90">90</span>
<span id="LID91" rel="#L91">91</span>
<span id="LID92" rel="#L92">92</span>
<span id="LID93" rel="#L93">93</span>
<span id="LID94" rel="#L94">94</span>
<span id="LID95" rel="#L95">95</span>
<span id="LID96" rel="#L96">96</span>
<span id="LID97" rel="#L97">97</span>
<span id="LID98" rel="#L98">98</span>
<span id="LID99" rel="#L99">99</span>
<span id="LID100" rel="#L100">100</span>
<span id="LID101" rel="#L101">101</span>
<span id="LID102" rel="#L102">102</span>
<span id="LID103" rel="#L103">103</span>
<span id="LID104" rel="#L104">104</span>
<span id="LID105" rel="#L105">105</span>
<span id="LID106" rel="#L106">106</span>
<span id="LID107" rel="#L107">107</span>
<span id="LID108" rel="#L108">108</span>
<span id="LID109" rel="#L109">109</span>
<span id="LID110" rel="#L110">110</span>
<span id="LID111" rel="#L111">111</span>
<span id="LID112" rel="#L112">112</span>
<span id="LID113" rel="#L113">113</span>
<span id="LID114" rel="#L114">114</span>
<span id="LID115" rel="#L115">115</span>
<span id="LID116" rel="#L116">116</span>
<span id="LID117" rel="#L117">117</span>
<span id="LID118" rel="#L118">118</span>
<span id="LID119" rel="#L119">119</span>
<span id="LID120" rel="#L120">120</span>
<span id="LID121" rel="#L121">121</span>
<span id="LID122" rel="#L122">122</span>
<span id="LID123" rel="#L123">123</span>
<span id="LID124" rel="#L124">124</span>
<span id="LID125" rel="#L125">125</span>
<span id="LID126" rel="#L126">126</span>
<span id="LID127" rel="#L127">127</span>
<span id="LID128" rel="#L128">128</span>
<span id="LID129" rel="#L129">129</span>
<span id="LID130" rel="#L130">130</span>
<span id="LID131" rel="#L131">131</span>
<span id="LID132" rel="#L132">132</span>
<span id="LID133" rel="#L133">133</span>
<span id="LID134" rel="#L134">134</span>
<span id="LID135" rel="#L135">135</span>
<span id="LID136" rel="#L136">136</span>
<span id="LID137" rel="#L137">137</span>
<span id="LID138" rel="#L138">138</span>
<span id="LID139" rel="#L139">139</span>
<span id="LID140" rel="#L140">140</span>
<span id="LID141" rel="#L141">141</span>
<span id="LID142" rel="#L142">142</span>
<span id="LID143" rel="#L143">143</span>
<span id="LID144" rel="#L144">144</span>
<span id="LID145" rel="#L145">145</span>
<span id="LID146" rel="#L146">146</span>
<span id="LID147" rel="#L147">147</span>
<span id="LID148" rel="#L148">148</span>
<span id="LID149" rel="#L149">149</span>
<span id="LID150" rel="#L150">150</span>
<span id="LID151" rel="#L151">151</span>
<span id="LID152" rel="#L152">152</span>
<span id="LID153" rel="#L153">153</span>
<span id="LID154" rel="#L154">154</span>
<span id="LID155" rel="#L155">155</span>
<span id="LID156" rel="#L156">156</span>
<span id="LID157" rel="#L157">157</span>
<span id="LID158" rel="#L158">158</span>
<span id="LID159" rel="#L159">159</span>
<span id="LID160" rel="#L160">160</span>
<span id="LID161" rel="#L161">161</span>
<span id="LID162" rel="#L162">162</span>
<span id="LID163" rel="#L163">163</span>
<span id="LID164" rel="#L164">164</span>
<span id="LID165" rel="#L165">165</span>
<span id="LID166" rel="#L166">166</span>
<span id="LID167" rel="#L167">167</span>
<span id="LID168" rel="#L168">168</span>
<span id="LID169" rel="#L169">169</span>
<span id="LID170" rel="#L170">170</span>
<span id="LID171" rel="#L171">171</span>
<span id="LID172" rel="#L172">172</span>
<span id="LID173" rel="#L173">173</span>
<span id="LID174" rel="#L174">174</span>
<span id="LID175" rel="#L175">175</span>
<span id="LID176" rel="#L176">176</span>
<span id="LID177" rel="#L177">177</span>
<span id="LID178" rel="#L178">178</span>
<span id="LID179" rel="#L179">179</span>
<span id="LID180" rel="#L180">180</span>
<span id="LID181" rel="#L181">181</span>
<span id="LID182" rel="#L182">182</span>
<span id="LID183" rel="#L183">183</span>
<span id="LID184" rel="#L184">184</span>
<span id="LID185" rel="#L185">185</span>
<span id="LID186" rel="#L186">186</span>
<span id="LID187" rel="#L187">187</span>
<span id="LID188" rel="#L188">188</span>
<span id="LID189" rel="#L189">189</span>
<span id="LID190" rel="#L190">190</span>
</pre>
          </td>
          <td width="100%">
            
              <div class="highlight"><pre><div class='line' id='LC1'><span class="c1">// Copyright 2010, Ollix</span></div><div class='line' id='LC2'><span class="c1">// All rights reserved.</span></div><div class='line' id='LC3'><span class="c1">//</span></div><div class='line' id='LC4'><span class="c1">// This file is part of QMeta.</span></div><div class='line' id='LC5'><span class="c1">//</span></div><div class='line' id='LC6'><span class="c1">// QMeta is free software: you can redistribute it and/or modify it under</span></div><div class='line' id='LC7'><span class="c1">// the terms of the GNU General Public License as published by the Free</span></div><div class='line' id='LC8'><span class="c1">// Software Foundation, either version 3 of the License, or any later version.</span></div><div class='line' id='LC9'><span class="c1">//</span></div><div class='line' id='LC10'><span class="c1">// QMeta is distributed in the hope that it will be useful, but WITHOUT</span></div><div class='line' id='LC11'><span class="c1">// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or</span></div><div class='line' id='LC12'><span class="c1">// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License</span></div><div class='line' id='LC13'><span class="c1">// for more details.</span></div><div class='line' id='LC14'><span class="c1">//</span></div><div class='line' id='LC15'><span class="c1">// You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC16'><span class="c1">// along with QMeta. If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="c1">// ---</span></div><div class='line' id='LC19'><span class="c1">// Author: olliwang@ollix.com (Olli Wang)</span></div><div class='line' id='LC20'><span class="c1">//</span></div><div class='line' id='LC21'><span class="c1">// QMeta - a library to manipulate image metadata based on Qt.</span></div><div class='line' id='LC22'><span class="c1">//</span></div><div class='line' id='LC23'><span class="c1">// This file implements the detail of the Iptc class.</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &quot;qmeta/iptc.h&quot;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#include &lt;QtCore&gt;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="k">namespace</span> <span class="n">qmeta</span> <span class="p">{</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="n">Iptc</span><span class="o">::</span><span class="n">Iptc</span><span class="p">(</span><span class="n">QObject</span> <span class="o">*</span><span class="n">parent</span><span class="p">)</span> <span class="o">:</span> <span class="n">Standard</span><span class="p">(</span><span class="n">parent</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC32'>&nbsp;&nbsp;<span class="n">InitRepeatableTags</span><span class="p">();</span></div><div class='line' id='LC33'>&nbsp;&nbsp;<span class="n">InitTagNames</span><span class="p">();</span></div><div class='line' id='LC34'><span class="p">}</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="c1">// Initializes the IPTC object. Returns false if no valid tag is found.</span></div><div class='line' id='LC37'><span class="kt">bool</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">Init</span><span class="p">(</span><span class="n">QIODevice</span> <span class="o">*</span><span class="n">file</span><span class="p">,</span> <span class="k">const</span> <span class="n">qint64</span> <span class="n">file_start_offset</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC38'>&nbsp;&nbsp;<span class="n">set_file</span><span class="p">(</span><span class="n">file</span><span class="p">);</span></div><div class='line' id='LC39'>&nbsp;&nbsp;<span class="n">set_file_start_offset</span><span class="p">(</span><span class="n">file_start_offset</span><span class="p">);</span></div><div class='line' id='LC40'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">ReadRecord</span><span class="p">();</span></div><div class='line' id='LC41'><span class="p">}</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><span class="c1">// Adds all repeatable tags to the repeatable_tags_ property.</span></div><div class='line' id='LC44'><span class="kt">void</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">InitRepeatableTags</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="n">QList</span><span class="o">&lt;</span><span class="n">Tag</span><span class="o">&gt;</span> <span class="n">repeatable_tags</span><span class="p">;</span></div><div class='line' id='LC46'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kObjectAttributeReference</span><span class="p">);</span></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kSubjectReference</span><span class="p">);</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kSupplementalCategory</span><span class="p">);</span></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kKeywords</span><span class="p">);</span></div><div class='line' id='LC50'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kContentLocationCode</span><span class="p">);</span></div><div class='line' id='LC51'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kContentLocationName</span><span class="p">);</span></div><div class='line' id='LC52'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kReferenceService</span><span class="p">);</span></div><div class='line' id='LC53'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kReferenceDate</span><span class="p">);</span></div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kReferenceNumber</span><span class="p">);</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kByLine</span><span class="p">);</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kByLineTitle</span><span class="p">);</span></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kContact</span><span class="p">);</span></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="n">repeatable_tags</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">kWriterEditor</span><span class="p">);</span></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="n">set_repeatable_tags</span><span class="p">(</span><span class="n">repeatable_tags</span><span class="p">);</span></div><div class='line' id='LC60'><span class="p">}</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="c1">// Initializes tag names used in IPTC.</span></div><div class='line' id='LC63'><span class="kt">void</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">InitTagNames</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC64'>&nbsp;&nbsp;<span class="n">QHash</span><span class="o">&lt;</span><span class="n">Tag</span><span class="p">,</span> <span class="n">QString</span><span class="o">&gt;</span> <span class="n">tag_names</span><span class="p">;</span></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kRecordVersion</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Record Version&quot;</span><span class="p">));</span></div><div class='line' id='LC66'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjectTypeReference</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Type Reference&quot;</span><span class="p">));</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjectAttributeReference</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Attribute Reference&quot;</span><span class="p">));</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjectName</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Name&quot;</span><span class="p">));</span></div><div class='line' id='LC69'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kEditStatus</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Edit Status&quot;</span><span class="p">));</span></div><div class='line' id='LC70'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kEditorialUpdate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Editorial Update&quot;</span><span class="p">));</span></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kUrgency</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Urgency&quot;</span><span class="p">));</span></div><div class='line' id='LC72'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubjectReference</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Subject Reference&quot;</span><span class="p">));</span></div><div class='line' id='LC73'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCategory</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Category&quot;</span><span class="p">));</span></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSupplementalCategory</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Supplemental Category&quot;</span><span class="p">));</span></div><div class='line' id='LC75'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kFixtureIdentifier</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Fixture Identifier&quot;</span><span class="p">));</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kKeywords</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Keywords&quot;</span><span class="p">));</span></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kContentLocationCode</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Content Location Code&quot;</span><span class="p">));</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kContentLocationName</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Content Location Name&quot;</span><span class="p">));</span></div><div class='line' id='LC79'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReleaseDate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Release Date&quot;</span><span class="p">));</span></div><div class='line' id='LC80'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReleaseTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Release Time&quot;</span><span class="p">));</span></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExpirationDate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Expiration Date&quot;</span><span class="p">));</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kExpirationTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Expiration Time&quot;</span><span class="p">));</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSpecialInstructions</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Special Instructions&quot;</span><span class="p">));</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kActionAdvised</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Action Advised&quot;</span><span class="p">));</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReferenceService</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Reference Service&quot;</span><span class="p">));</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReferenceDate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Reference Date&quot;</span><span class="p">));</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kReferenceNumber</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Reference Number&quot;</span><span class="p">));</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDateCreated</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Date Created&quot;</span><span class="p">));</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kTimeCreated</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Time Created&quot;</span><span class="p">));</span></div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDigitalCreationDate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Digital Creation Date&quot;</span><span class="p">));</span></div><div class='line' id='LC91'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kDigitalCreationTime</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Digital Creation Time&quot;</span><span class="p">));</span></div><div class='line' id='LC92'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kOriginatingProgram</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Originating Program&quot;</span><span class="p">));</span></div><div class='line' id='LC93'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kProgramVersion</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Program Version&quot;</span><span class="p">));</span></div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjectCycle</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Cycle&quot;</span><span class="p">));</span></div><div class='line' id='LC95'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kByLine</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;By Line&quot;</span><span class="p">));</span></div><div class='line' id='LC96'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kByLineTitle</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;By Line Title&quot;</span><span class="p">));</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCity</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;City&quot;</span><span class="p">));</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSubLocation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Sub Location&quot;</span><span class="p">));</span></div><div class='line' id='LC99'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kProvinceState</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Province State&quot;</span><span class="p">));</span></div><div class='line' id='LC100'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCountryPrimaryLocationCode</span><span class="p">,</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Country Primary Location Code&quot;</span><span class="p">));</span></div><div class='line' id='LC102'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCountryPrimaryLocationName</span><span class="p">,</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Country Primary Location Name&quot;</span><span class="p">));</span></div><div class='line' id='LC104'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kOriginalTransmissionReference</span><span class="p">,</span></div><div class='line' id='LC105'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Original Transmission Reference&quot;</span><span class="p">));</span></div><div class='line' id='LC106'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kHeadline</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Headline&quot;</span><span class="p">));</span></div><div class='line' id='LC107'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCredit</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Credit&quot;</span><span class="p">));</span></div><div class='line' id='LC108'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kSource</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Source&quot;</span><span class="p">));</span></div><div class='line' id='LC109'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCopyrightNotice</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Copyright Notice&quot;</span><span class="p">));</span></div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kContact</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Contact&quot;</span><span class="p">));</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kCaptionAbstract</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Caption Abstract&quot;</span><span class="p">));</span></div><div class='line' id='LC112'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kWriterEditor</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Writer Editor&quot;</span><span class="p">));</span></div><div class='line' id='LC113'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kRasterizedCaption</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Rasterized Caption&quot;</span><span class="p">));</span></div><div class='line' id='LC114'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageType</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Type&quot;</span><span class="p">));</span></div><div class='line' id='LC115'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kImageOrientation</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Image Orientation&quot;</span><span class="p">));</span></div><div class='line' id='LC116'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kLanguageIdentifier</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Language Identifier&quot;</span><span class="p">));</span></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kAudioType</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Audio Type&quot;</span><span class="p">));</span></div><div class='line' id='LC118'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kAudioSamplingRate</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Audio Sampling Rate&quot;</span><span class="p">));</span></div><div class='line' id='LC119'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kAudioSamplingResolution</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Audio Sampling Resolution&quot;</span><span class="p">));</span></div><div class='line' id='LC120'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kAudioDuration</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Audio Duration&quot;</span><span class="p">));</span></div><div class='line' id='LC121'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kAudioOutcue</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Audio Outcue&quot;</span><span class="p">));</span></div><div class='line' id='LC122'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjDataPreviewFileFormat</span><span class="p">,</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Data Preview File Format&quot;</span><span class="p">));</span></div><div class='line' id='LC124'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjDataPreviewFileFormatVer</span><span class="p">,</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Data Preview File Format Version&quot;</span><span class="p">));</span></div><div class='line' id='LC126'>&nbsp;&nbsp;<span class="n">tag_names</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">kObjDataPreviewData</span><span class="p">,</span> <span class="n">tr</span><span class="p">(</span><span class="s">&quot;Object Data Preview Data&quot;</span><span class="p">));</span></div><div class='line' id='LC127'>&nbsp;&nbsp;<span class="n">set_tag_names</span><span class="p">(</span><span class="n">tag_names</span><span class="p">);</span></div><div class='line' id='LC128'><span class="p">}</span></div><div class='line' id='LC129'><br/></div><div class='line' id='LC130'><span class="c1">// Reads the DataSet started from the specified offset.</span></div><div class='line' id='LC131'><span class="n">QByteArray</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">ReadDataSet</span><span class="p">(</span><span class="kt">int</span> <span class="n">offset</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC132'>&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">data</span><span class="p">;</span></div><div class='line' id='LC133'>&nbsp;&nbsp;<span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">seek</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC134'>&nbsp;&nbsp;<span class="n">Tag</span> <span class="n">tag</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="n">Tag</span><span class="o">&gt;</span><span class="p">(</span><span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="mi">1</span><span class="p">).</span><span class="n">toHex</span><span class="p">().</span><span class="n">toInt</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="mi">16</span><span class="p">));</span></div><div class='line' id='LC135'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">tag_names</span><span class="p">().</span><span class="n">contains</span><span class="p">(</span><span class="n">tag</span><span class="p">))</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">data</span><span class="p">;</span></div><div class='line' id='LC137'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">size</span> <span class="o">=</span> <span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="mi">2</span><span class="p">).</span><span class="n">toHex</span><span class="p">().</span><span class="n">toInt</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="mi">16</span><span class="p">);</span></div><div class='line' id='LC138'>&nbsp;&nbsp;<span class="n">data</span> <span class="o">=</span> <span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC139'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">data</span><span class="p">;</span></div><div class='line' id='LC140'><span class="p">}</span></div><div class='line' id='LC141'><br/></div><div class='line' id='LC142'><span class="c1">// Reads the Record started from the specified offset. Also saves all found</span></div><div class='line' id='LC143'><span class="c1">// tags and their offsets in the tag_offsets_ property. Returns false if</span></div><div class='line' id='LC144'><span class="c1">// no tag is found.</span></div><div class='line' id='LC145'><span class="kt">bool</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">ReadRecord</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC146'>&nbsp;&nbsp;<span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">seek</span><span class="p">(</span><span class="n">file_start_offset</span><span class="p">());</span></div><div class='line' id='LC147'>&nbsp;&nbsp;<span class="n">QHash</span><span class="o">&lt;</span><span class="n">Tag</span><span class="p">,</span> <span class="n">qint64</span><span class="o">&gt;</span> <span class="n">tag_offsets</span><span class="p">;</span></div><div class='line' id='LC148'>&nbsp;&nbsp;<span class="k">while</span> <span class="p">(</span><span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="mi">2</span><span class="p">).</span><span class="n">toHex</span><span class="p">()</span> <span class="o">==</span> <span class="s">&quot;1c02&quot;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">tag_offset</span> <span class="o">=</span> <span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">pos</span><span class="p">();</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Tag</span> <span class="n">tag</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="n">Tag</span><span class="o">&gt;</span><span class="p">(</span><span class="n">file</span><span class="p">()</span><span class="o">-&gt;</span><span class="n">read</span><span class="p">(</span><span class="mi">1</span><span class="p">).</span><span class="n">toHex</span><span class="p">().</span><span class="n">toInt</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="mi">16</span><span class="p">));</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">data</span> <span class="o">=</span> <span class="n">ReadDataSet</span><span class="p">(</span><span class="n">tag_offset</span><span class="p">);</span></div><div class='line' id='LC152'><br/></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">repeatable_tags</span><span class="p">().</span><span class="n">contains</span><span class="p">(</span><span class="n">tag</span><span class="p">))</span></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tag_offsets</span><span class="p">.</span><span class="n">insertMulti</span><span class="p">(</span><span class="n">tag</span><span class="p">,</span> <span class="n">tag_offset</span><span class="p">);</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">tag_offsets</span><span class="p">.</span><span class="n">insert</span><span class="p">(</span><span class="n">tag</span><span class="p">,</span> <span class="n">tag_offset</span><span class="p">);</span></div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="c1">// Returns false if no valid tag is found.</span></div><div class='line' id='LC159'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">tag_offsets</span><span class="p">.</span><span class="n">count</span><span class="p">()</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="kc">false</span><span class="p">;</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'>&nbsp;&nbsp;<span class="n">set_tag_offsets</span><span class="p">(</span><span class="n">tag_offsets</span><span class="p">);</span></div><div class='line' id='LC163'>&nbsp;&nbsp;<span class="k">return</span> <span class="kc">true</span><span class="p">;</span></div><div class='line' id='LC164'><span class="p">}</span></div><div class='line' id='LC165'><br/></div><div class='line' id='LC166'><span class="c1">// Returns the value associated with the specified tag.</span></div><div class='line' id='LC167'><span class="n">QByteArray</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">Value</span><span class="p">(</span><span class="n">Tag</span> <span class="n">tag</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC168'>&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">value</span><span class="p">;</span></div><div class='line' id='LC169'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">tag_offsets</span><span class="p">().</span><span class="n">contains</span><span class="p">(</span><span class="n">tag</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">offset</span> <span class="o">=</span> <span class="n">tag_offsets</span><span class="p">().</span><span class="n">value</span><span class="p">(</span><span class="n">tag</span><span class="p">);</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">value</span> <span class="o">=</span> <span class="n">ReadDataSet</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC172'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC173'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">value</span><span class="p">;</span></div><div class='line' id='LC174'><span class="p">}</span></div><div class='line' id='LC175'><br/></div><div class='line' id='LC176'><span class="c1">// Returns a lit containing all the values associated with the specified tag.</span></div><div class='line' id='LC177'><span class="n">QList</span><span class="o">&lt;</span><span class="n">QByteArray</span><span class="o">&gt;</span> <span class="n">Iptc</span><span class="o">::</span><span class="n">Values</span><span class="p">(</span><span class="n">Tag</span> <span class="n">tag</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC178'>&nbsp;&nbsp;<span class="n">QList</span><span class="o">&lt;</span><span class="n">QByteArray</span><span class="o">&gt;</span> <span class="n">values</span><span class="p">;</span></div><div class='line' id='LC179'>&nbsp;&nbsp;<span class="n">QList</span><span class="o">&lt;</span><span class="n">qint64</span><span class="o">&gt;</span> <span class="n">offsets</span> <span class="o">=</span> <span class="n">tag_offsets</span><span class="p">().</span><span class="n">values</span><span class="p">(</span><span class="n">tag</span><span class="p">);</span></div><div class='line' id='LC180'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">offsets</span><span class="p">.</span><span class="n">count</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qint64</span> <span class="n">offset</span> <span class="o">=</span> <span class="n">offsets</span><span class="p">.</span><span class="n">at</span><span class="p">(</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">QByteArray</span> <span class="n">value</span> <span class="o">=</span> <span class="n">ReadDataSet</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">values</span><span class="p">.</span><span class="n">append</span><span class="p">(</span><span class="n">value</span><span class="p">);</span></div><div class='line' id='LC184'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC185'>&nbsp;&nbsp;<span class="n">qSort</span><span class="p">(</span><span class="n">values</span><span class="p">);</span></div><div class='line' id='LC186'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">values</span><span class="p">;</span></div><div class='line' id='LC187'><span class="p">}</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'><span class="p">}</span>  <span class="c1">// namespace qmeta</span></div><div class='line' id='LC190'><br/></div></pre></div>
            
          </td>
        </tr>
      </table>
    
  </div>


      </div>
    </div>

  


    </div>
  
      

      <div class="push"></div>
    </div>

    <div id="footer">
      <div class="site">
        <div class="info">
          <div class="links">
            <a href="http://github.com/blog"><b>Blog</b></a> |
            <a href="http://support.github.com">Support</a> |
            <a href="http://github.com/training">Training</a> |
            <a href="http://github.com/contact">Contact</a> |
            <a href="http://develop.github.com">API</a> |
            <a href="http://status.github.com">Status</a> |
            <a href="http://twitter.com/github">Twitter</a> |
            <a href="http://help.github.com">Help</a> |
            <a href="http://github.com/security">Security</a>
          </div>
          <div class="company">
            &copy;
            2010
            <span id="_rrt" title="0.06138s from fe2.rs.github.com">GitHub</span> Inc.
            All rights reserved. |
            <a href="/site/terms">Terms of Service</a> |
            <a href="/site/privacy">Privacy Policy</a>
          </div>
        </div>
        <div class="sponsor">
          <div>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
          <a href="http://www.rackspace.com">
            <img alt="Dedicated Server" src="http://assets2.github.com/images/modules/footer/rackspace_logo.png?943fe5b66ca533004a921a83178f661ea31c13c0" />
          </a>
        </div>
      </div>
    </div>

    <script>window._auth_token = "e462204c4567a596cfe84faade56d376be913e51"</script>
    

    <script type="text/javascript">
      _kmq.push(['trackClick', 'entice_banner_link', 'Entice banner clicked']);
      
    </script>
    
  </body>
</html>

