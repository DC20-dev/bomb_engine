﻿#pragma once

// macros

#define BE_NAMESPACE bomb_engine

// next are the attributes to tell the header tool what to bind to scripting APIs and what not to.
// I find that having to mark every member of a class to expose it, like in UE, is a bit too
// repetitive and in most cases I would end up sprinkling a ton of UPROPERTY()s around, so for my
// API I'd much rather have a class marked to bind all the members and methods and optional
// `hide` attributes. because the engine is supposed to be used with ECS instead of object
// composition, it doesn't make much sense to expose protected and private members to allow
// inheritance (even if it might be helpful with similar components). before getting to this type of
// scriptability though, I will implement an object-oriented solution similar to Unity's version,
//  but it will merely be a placeholder for the former to get things going for now.

// mark a class, struct, function or enum with this special attribute to tell the header tool to
// expose it to a scripting system; use it inside [[ ]] just like an attribute.
#define expose clang::annotate("expose")
// mark public parts of a class that you don't want to expose with this to hide them from the
// generation; use it inside [[ ]] just like an attribute.
#define hide clang::annotate("hide")

// disable warning about unknown attributes
#pragma warning(disable : 5030)