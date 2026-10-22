# Headless Ghidra recovery — official BDS binary

> Proprietary research evidence, mechanically derived from the Mojang
> `bedrock_server` binary. Not MIT-licensed OpenBDS source. The target was
> never executed: this is a static import plus decompiler pass.

- mode: `worldgen`
- program image base: `0x100000`
- relative relocations parsed: `723948`
- RTTI `type_info` objects recovered: `52109`
- distinct classes/vtables recovered: `41853` / `50268`
- vtables selected by name filter: `265`
- selected vtable slots: `2278`
- functions analysed: `1200`
- functions decompiled: `1200`

## How the class names were recovered

The binary has no symbol table. Itanium ABI `type_info` objects were
located structurally: a pointer to a data-section vtable followed by a
pointer to an ASCII mangled type name in `.rodata`. Vtables were then
found as relocated pointers equal to those `type_info` addresses, so the
inventory in `VTABLE-CLASSES.tsv` covers every polymorphic class in the
binary rather than a hand-written guess list.

## Files

- `VTABLE-CLASSES.tsv` — every recovered class/vtable
- `vtable-slots.tsv` — slot-to-function map for selected classes
- `functions.tsv` — analysis + string attribution per function
- `callgraph.tsv` — recovered direct call edges
- `pseudocode/pseudocode-*.md` — Ghidra C output
- `pseudocode-index.md` — index into the parts

## Priority classes (expanded by call-graph BFS)

- EditorCustomBiomeSource
- XoroshiroRandom
- BiomeSource3d
- ReplacementBiomeSource<?, ?, long, ?, char, ?, ?*, short>
- ReplacementBiomeSource<?, ?*, short, ?, double>
- NetherGenerator
- OverworldGenerator
- OverworldGenerator2d
- OverworldGeneratorMultinoise
- TheEndGenerator
- VanillaOverworldBiomeSource<?, ?*, short, ?, double>
- NodeGraphBiomeSource<?, ?*, short, ?, double>
- CachedBiomeSource<?, ?, ? volatile, ?, int, long, long, ?, void&&, long double, ?, wchar_t, ?, ?, long, double, ?, int, ?, unsigned long, long double, std::ostream, ?, ?, char, long double, ?, ?, ?*, short, ?, double>
- std::__1::__function::__func<?, Bedrock::Threading::InstancedThreadLocal<OverworldGenerator::ThreadData, S_::allocator<S6, ?>>::?::E::void, ?, long, S6*, ?>::?::S7::?::?::SB::?
- std::__1::__function::__func<?, OverworldGenerator::loadChunk, ?&, ?, long double, long double, long, ?, unsigned char, ?, ?, ?, bool>::$_0::S_::allocator<S5, ?>::?::void::? const&::?::long::?::char::?::?*::short::? const&::?::long::?::char::?::int
- CachedBiomeSource<?, ?, long double&, ?, long, ?, char, long double, unsigned long, long double, ?, unsigned short, ?, int, ?, unsigned long, long double, std::ostream, ?, ?, char, long double, ?, ?, ?, long, ?, char, ?, ?*, short>
- CachedBiomeSource<?, ?, ?, int, ?, unsigned long, long double, std::ostream, ?, ?, char, long double, ?, double>
- VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder
- VanillaSurfaceBuilders::MesaSurfaceBuilder
- VanillaSurfaceBuilders::NoiseGradientSurfaceBuilder
- VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder
- VanillaSurfaceBuilders::SwampSurfaceBuilder
- VanillaSurfaceBuilders::TheEndSurfaceBuilder
- NoiseBasedColorPaletteFlag
- FrozenNoiseBasedTemperatureFlag
- WorldGenMultiNoiseClimateAttributes
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberPropertySetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, ?, ?, double, ?, S6::?::mSeed>>
- Scripting::Reflection::MemberPropertySetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, ?, ?, double, ?, S4::?::mSeed>
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, S2::?::ReturnPolicy>::?::?::double::?::S6::?::mSeed>
- Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, S0::?::ReturnPolicy>::?::?::double::?::S4::?::mSeed
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberPropertySetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, ?, ?, double, ?, S6::?::mNewBiomes>>
- Scripting::Reflection::MemberPropertySetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, ?, ?, double, ?, S4::?::mNewBiomes>
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, S2::?::ReturnPolicy>::?::?::double::?::S6::?::mNewBiomes>
- Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSourceConfig, S0::?::ReturnPolicy>::?::?::double::?::S4::?::mNewBiomes
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSource, S2::?::ReturnPolicy>::?::?::double::?::S6 const::?::getId::void>
- Scripting::Reflection::MemberPropertyGetter<Editor::ScriptModule::ScriptCustomBiomeSource, S0::?::ReturnPolicy>::?::?::double::?::S4 const::?::getId::void
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::destroy, void>>
- Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::destroy, void>
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::recalculateBiomes, S_::vector<S5::?::ScriptCustomBiomeConfig, S_::allocator<S8, ?>> const&>>
- Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::recalculateBiomes, std::__1::vector<S3::?::ScriptCustomBiomeConfig, S5::?::allocator<S7, ?>> const&>
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::updateColor, S_::basic_string<char, S_::char_traits<char>, S_::allocator<char>> const&, ScriptModuleMinecraft::ScriptRGBA const&>>
- Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::ScriptModule::ScriptCustomBiomeSource::updateColor, std::__1::basic_string<char, S5::?::char_traits<char>, S5::?::allocator<char>> const&, ScriptModuleMinecraft::ScriptRGBA const&>
- std::__1::__shared_ptr_emplace<Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::API::EditorScriptInternalAPI::_createCustomBiomeSource, S4::?::ScriptModule::ScriptCustomBiomeSourceConfig const&>>
- Scripting::Reflection::MemberFunction<?, ?, double, ?, Editor::API::EditorScriptInternalAPI::_createCustomBiomeSource, S2::?::ScriptModule::ScriptCustomBiomeSourceConfig const&>
- std::__1::__function::__func<?, Scripting::internal::BaseScriptComponent::?::I::Editor::ScriptModule::ScriptCustomBiomeSource>::S3::?::TypeCache&::bool::S4::?::Traits<?, ?>
- std::__1::__shared_ptr_emplace<entt::basic_storage<Editor::ScriptModule::ScriptCustomBiomeSource, Scripting::ObjectHandleValue, S_::allocator<S5, ?>>, S8::?::?::S7::?>
- entt::basic_storage<Editor::ScriptModule::ScriptCustomBiomeSource, Scripting::ObjectHandleValue, std::__1::allocator<S3, ?>>
- JigsawBlock
- FixedBiomeSource
- VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper
- VanillaSurfaceBuilders::CappedSurfaceBuilder
- VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder
- VoidGenerator
- _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess
- WorldGenerator
- br::worldgen::WorldGenRandom
- JigsawStructurePostprocessAction
- br::worldgen::processors::JigsawReplacement
- br::worldgen::JigsawStructure
- JigsawStructureLoader
- br::worldgen::JigsawStructureBuilder
- NoiseUtils::DoublesForFloatsRandom
- FlatWorldGenerator

## Diagnostics

- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
